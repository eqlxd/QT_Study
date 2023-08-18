#include "widget.h"
#include <QApplication>
#include <QDebug>
#include <QMessageBox>
#include <QDateTime>
#include <windows.h>
#include <DbgHelp.h>
#include "messageinfo.h"
#include "license.h"

long callbackWin(struct _EXCEPTION_POINTERS* _exception_info)
{
    HANDLE dump_file = CreateFile(L"UDBF.dmp", GENERIC_WRITE, 0, NULL, CREATE_ALWAYS,
                                  FILE_ATTRIBUTE_NORMAL, NULL);
    MINIDUMP_EXCEPTION_INFORMATION info;
    info.ExceptionPointers = _exception_info;
    info.ThreadId = GetCurrentThreadId();
    info.ClientPointers = TRUE;

    MiniDumpWriteDump(GetCurrentProcess(), GetCurrentProcessId(),dump_file, MiniDumpNormal, &info, NULL, NULL);
    CloseHandle(dump_file);

    ::MessageBoxW(NULL, L"Create Dump File Ok.", L"CrashHelper", MB_OK);
    return EXCEPTION_EXECUTE_HANDLER;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)callbackWin);

    QVariantMap lic_data = LIC->getUseDate("udbf_test1");
//    if (lic_data.isEmpty())
//    {
//        QMessageBox::warning(nullptr, "UDBF Calculation", "license load failed!");
//        return 0;
//    }

    MSG->installMessageHandler();

    QDate today = QDate::currentDate();
    QDate start_date = QDate::fromString(lic_data.value("start").toString(), "yyyyMMdd");
    QDate last_date = QDate::fromString(lic_data.value("end").toString(), "yyyyMMdd");
//    qDebug() << start_date << today << last_date;
//    if ((today < start_date) || (last_date < today))
//    {
//        QMessageBox::information(nullptr, "UDBF Calculation", "Authorization has expired!");
//        return 1;
//    }

    Widget w;
    w.setLicenseData(lic_data.value("start").toString(), lic_data.value("end").toString());
    w.show();

    return a.exec();
}
