#ifndef UDBFPARSER_GLOBAL_H
#define UDBFPARSER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(UDBFPARSER_LIBRARY)
#  define UDBFPARSER_EXPORT Q_DECL_EXPORT
#else
#  define UDBFPARSER_EXPORT Q_DECL_IMPORT
#endif

#endif // UDBFPARSER_GLOBAL_H
