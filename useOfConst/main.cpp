#include <QCoreApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int num00 =20;

    const int num01 = 7; //和int const num00 =5一样，注意！！用const修饰变量时，一定要给变量初始化，否则之后无法赋值；
    int const num02 = num01;
    qDebug()<<num00;
    qDebug()<<num01;
    qDebug()<<num02;

    //常量指针与指针常量


        //常量指针：指针指向的内容是常量，有两个定义方式：
            const int * num03;
            int const * num04;
                //常量指针说的是不能通过这个指针改变变量的值，但是还是可以通过其他的引用来改变变量的值的。
                    int  test00 =5;
                    num03 = &test00;
                    test00 =6;// *num03 = 7这样写就是错的；
                    qDebug()<<*num03;

                //常量指针指向的值不能改变，但是这并不是意味着指针本身不能改变，常量指针可以指向其他的地址。
                    num04 = num03;
                    qDebug()<<*num04;
                    num04 = &num01;
                    qDebug()<<*num04;

        //指针常量是指指针本身是个常量，不能再指向其他的地址，写法如下
            int *const pnum05 = &test00;
            //pnum05= &num03;报错
            qDebug()<<"pnum05:"<<*pnum05;
            test00 = 11;
            qDebug()<<"pnum05:"<<*pnum05;
            *pnum05= 13 ;
            qDebug()<<"pnum05:"<<*pnum05;


    return a.exec();
}
