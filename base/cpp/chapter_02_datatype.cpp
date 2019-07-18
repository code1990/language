//
// Created by issuser on 2019/7/18 0018.
//
/**
 * C++ 第二章 数据类型
 *
 *  数据类型>>>>>基本类型,构造类型,指针类型,引用类型,空类型
    基本类型>>>>>短整型,整型,长整型
    构造类型结构体类型>>>>>布尔型,枚举类型,数组类型,公用体类型,类类型

 *
 */
#include "chapter_02_datatype.h"
#include <iostream>
#include <iomanip>
using  namespace std;
/*2.3常量
 *
 * 2.3常量及符号
在程序运行过程中，其值不能改变的量称为常量。
常量可分为整型常量、实型常量、字符常量和字符串常量。
2.3.1整型常量
整型常量可以分为有符号整型常量和无符号整型常量。
2.3.2实型常量
实型常量也称为浮点数，只能采用十进制形式表示。它有两种表示形式，即小数表示法和指数表示法。
2.3.3字符常量
字符常量是用单引号括起来的一个字符。
2.3.4字符串常量
字符串常量是由一对双引号括起来的零个或多个字符序列。
2.3.5其他常量
常量还包括布尔常量、枚举常量、宏定义常量等。
布尔(bool)常量:布尔常量只有两个，一个是true，表示真;一个是false，表示假。
枚举常量:枚举型数据中定义的成员也都是常量，这将在后文介绍。
宏定义常量:通过#define宏定义的一些值也是常量。
 * */
void DefineConstant(){
    cout<<2009<<endl;
    cout<<-2009<<endl;
    cout<<3.14<<endl;
    cout<<'a'<<endl;
    cout<<"HelloWorld"<<endl;
    cout<<true<<endl;
    cout<<false<<endl;
}
/*2.4变量
 *
 * 2.4.1标识符标识符命名规则:
(1)由字母、数字及下划线组成，且不能以数字开头。
(2)大写和小写字母代表不同意义。
(3)不能与关键字同名。
(4)尽量“见名知义”，应该受一定规范的约束。
2.4.2变量与变量说明
[修饰符] 类型 变量名标识符;
2.4.3整型变量
整型[signed]int无符号整型unsigned[int]
有符号短整型[signed]short[int]
无符号短整型 unsigned short[int]
有符号长整型[signed]long[int]
无符号长整型 unsigned long[int]
2.4.4实型变量
实型变量又可称为浮点型变量，可分为单精度(float)、双精度(double)和长双精度(long double)3种。
2.4.7字符变量
字符变量的类型说明符为char，一个字符变量占用1字节内存单元。
2.4.5变量赋值
2.4.6变量赋初值
 *
 * */
void DefineVariable(){
    signed int sInt = 10;
    unsigned int uInt =10;
    signed short int  ssInt = 10;
    unsigned short int usInt = 10;
    signed long int slInt = 10;
    unsigned long int ulInt = 10;
    cout<<sInt<<endl;
    cout<<uInt<<endl;
    cout<<ssInt<<endl;
    cout<<usInt<<endl;
    cout<<slInt<<endl;
    cout<<ulInt<<endl;

    float vFloat = 3.14;
    double vDouble =  3.14;
    cout<<vFloat<<endl;
    cout<<vDouble<<endl;

    char vChar = 'C';
    cout<<vChar<<endl;

    int number;
    number = 10;
    cout<<number<<endl;
    int sum =100;
    cout<<100<<endl;
}
/*
 * 2.5数据输入与输出
2.5.1控制台屏幕
2.5.2C++语言中的流
C++语言定义了I/O类库供用户使用，标准I/O操作有4个类对象，分别是cin、cout、cerr和clog。
其中cin代表标准输入设备键盘，也称为cin流或标准输入流。
cout代表标准输出显示器，也称为cout流或标准输出流.
当进行错误信息输出操作时使用cerr或clog流。
C++的流通过重载运算符“<<”和“>>”执行输入和输出操作。
1.cout语句的一般格式
cout<<表达式1<<表达式2<……<<表达式n<<endl:
cin>>变量1>>变量2>…>变量n:
cin 函数相当于c库函数中的scanf，将用户的输入赋值给变量。

2.5.3流操作的控制
在头文件iomanip.h中定义了一些控制流输出格式的函数，默认情况下整型数按十进制形式输出
(1)long setf(long f):根据参数f设置相应的格式标志，返回此前的设置。
(2)long unsetf(long f):根据参数f清除相应的格式化标志，返回此前的设置。
(3)int width):返回当前的输出域宽。
(4)int width(int w):设置下一个数据值的输出域宽为w，返回为输出上一个数据值所规定的域宽
(5)setiosflags(long f):设置f所对应的格式标志，功能与setf(longf)成员函数相同
(6)resetiosflags(long f):清除f所对应的格式化标志，功能与unsetf(longf)成员函数相同。
(7)setfill(intc):设置填充字符的ASC码为c的字符。
(8)setprecisiion(int n):设置浮点数的输出精度为n。
(9)setw(int w):设置下一个数据的输出域宽为w。

dec:转换为按十进制输出整数，是默认的输出格式。
oct：转换为按八进制输出整数。
hex：转换为按十六进制输出整数。
ws：从输出流中读取空白字符。
endl：输出换行符\n并刷新流。刷新流是指把流缓冲区的内容立即写入到对应的物理设备上。
ends：输出一个空字符(0。
flush：只刷新一个输出流。

1)d格式符，以十进制形式输出整数。有以下几种用法：
2)o格式符，以八进制形式输出整数。有以下几种用法：
3)x格式符，以十六进制形式输出整数。有以下几种用法：
4)s格式符，用来输出一个字符串。
5)f格式符，以小数形式输出实型数据
6)e格式符，以指数形式输出实型数据。
 * */
void InputAndOutput(){
    cout << "stream function example"<< endl;
    double a=123.456789012345;
    cout << a<< endl;
    cout << setprecision(9)<<a<< endl;
    cout <<setprecision(6)<< endl;//恢复默认格式(精度为6)
    cout << setiosflags(ios::fixed)<< endl;
    cout << setiosflags(ios::fixed)<< setprecision(8)<<a<< endl;
    cout << setiosflags(ios::scientific)<<a<< endl;
    cout << setiosflags(ios::scientific)<< setprecision(4)<<a <<endl;

    cout << "stream simple function example"<< endl;
    int b=123456;
    cout<<b<<endl;
    cout <<dec<<b<< endl;//10进制
    cout <<oct<<b<< endl;//8进制
    cout <<hex<<b<< endl;//16进制

    cout << "printf function format example"<< endl;
    printf("%d\n",10);//10进制
    printf("%o\n",10);//8进制
    printf("%x\n",10);//16进制
    printf("%s\n","HelloWorld");//字符串
    printf("%f\n",3.14);//浮点型
    printf("%e\n",3e2);//指数型
}