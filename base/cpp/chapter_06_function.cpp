//
// Created by issuser on 2019/7/18 0018.
//
/**
 * 第六章 函数
 */
#include "chapter_06_function.h"
#include <iostream>
using namespace std;
int GlobalVariable =100;


/**
 * 6.1函数概述
函数就是能够实现特定功能的程序模块。
6.1.1函数的定义
函数定义的一般形式如下：
类型标识符 函数名(形式参数列表)
{
变量的声明
语句
}
6.1.2函数的声明
调用一个函数前必须先声明函数的返回值类型和参数类型。

6.2函数参数及返回值
6.2.1返回值
从被执行函数体中的程序段所取得的并返回给主调函数的值，函数的返回值通过return语句返回给主调函数。
6.2.2空函数
void没有参数和返回值，函数的作用域也为空的函数就是空函数。
6.2.3形参与实参
函数定义时如果参数列表为空，说明函数是无参函数；
如果参数列表不为空，就称为有参函数有参函数中的参数在函数声明和定义时被称为"形式参数"（简称形参），
在函数被调用时被赋予具体值，具体的值被称为"实形参参际参数"（简称实参）。
6.2.4默认参数
在定义函数时，可以为参数设置一个默认值，这样在调用函数时可以省略一些参数
6.2.5可变参数
可变参数的参数列表会显示"…"。printf传入的就是可变参数
 *
 */
 /*带返回值的有参数函数*/
int Add(int a,int b){
 return a+b;
}
/*空函数*/
void NullFunction(){
    cout<<"this is null function"<<endl;
}
/*设置默认的参数*/
int Multiplication(int a,int b =10){
    return a*b;
}
void DeclareFunction(){
    int c = Add(1,2);
    cout << c <<endl;
    NullFunction();
    Multiplication(9);
    printf("%d,%s",100,"test");
}
/**
 *6.3函数调用
整个函数的调用过程被称为函数调用。
标准C++是一种强制类型检查的语言，在调用函数前，必须把函数的参数类型和返回值类型告知编译。

6.3.1传值调用
主调函数和被调用函数之间有数据传递关系，这种调用方式被称为传值调用。

6.3.2嵌套调用
在自定义函数中调用其他自定义函数，这种调用方式称为嵌套调用。

6.3.3递归调用
直接或间接调用自己的函数被称为递归函数（recursive funciton）。
递归函数必须定义一个停止条件，否则函数将永远递归下去。
 *
 */
void CallBackFunction(){
    int c = Add(1,2);
    NullFunction();
}

/**
 * 使用递归调用阶乘
 *
 */
long FactorialRecursive(int n){
    if(n==0){
        return 1;
    }else {
        return n*FactorialRecursive(n-1);
    }
}
/**
 *6.4变量作用域
在函数体内定义的变量称为局部变量，
在函数体外定义的变量称为全局变量。
6.5重载函数
函数重载：方法名相同 参数个数不同 参数类型不同
 *
 */
void OverloadFunction(){
    int localVariable = 100;
    cout<<GlobalVariable<<endl;
    cout<<localVariable<<endl;
}
void OverloadFunction(int a,int b){
    cout<< a<<endl;
    cout<<b<<endl;
}
/**
 *6.6内联函数

通过inline关键字可以把函数定义为内联函数，编译器会在每个调用该函数的地方展开一个函数的副本。
使用内联函数可以减少移动指针寻找调用函数地址带来的开销

应该在函数实现代码很简短或者调用该函数次数相对较少的情况下将函数定义为内联函数

内联函数定义在头文件里，只能在优化程序时使用。

 *
 */
void InlineFunction(){
    cout<<"This is inline function"<<endl;
    cout<<AddInteger(1,2)<<endl;
}
/*内联函数声明在头文件方便定位 然后添加其实现*/
inline int AddInteger(int x,int y){
    return x+y;
}

/**
 * 6.7变量的存储类别
C++语言中定义了4种变量的存储类别，分别是auto变量、static变量、register变量和extern变量。

6.7.1 auto变量
这种存储类型是C++语言程序中默认的存储类型。函数内未加存储类型说明的变量均视为自动变量，也就是说自动变量可省去关键字auto。
自动变量具有以下特点：
（1）自动变量的作用域仅限于定义该变量的个体内。
（2）自动变量属于动态存储方式，变量分配的内存是在栈中，当函数调用结束后，自动变量的值会被释放。
（3）不同的个体中允许使用同名的变量而不会混淆。

6.7.2 static变量
在声明变量时加关键字static，可以将变量声明为静态变量。
静态局部变量的值在函数调用结束后不消失，静态全局变量只能在本源文件中使用。
静态变量具有以下特点：
（1）静态变量在函数内定义，在程序退出时释放，在程序整个运行期间都不释放
（2）静态变量的作用域与自动变量相同，在函数内定义就在函数内使用
（3）编译器会为静态局部变量赋予0值。

6.7.3 register变量
为了提高效率，C++语言可以将变量声明为寄存器变量，这种变量将局部变量的值存放在CPU中的寄存器中，使用时不需要访问内存，而直接从寄存器中读写。
对寄存器变量的说明：
（1）寄存器变量属于动态存储方式。凡需要采用静态存储方式的变量不能定义为寄存器变量。
（2）编译程序会自动决定哪个变量使用寄存器存储。register可以起到程序优化的作用。

6.7.4extern变量
使用其他源文件中的全局变量时，只需要在本源文件中使用extern关键字来声明这个变量即可
extern一般是使用在多文件之间需要共享某些代码时。
 *
 */
void ManyVariable(){
//    auto int b;
    static int c = 1;
    register  int d = 1;
    /*extern一般是使用在多文件之间需要共享某些代码时。*/
//    extern int e;
//    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
//    cout<<e<<endl;
}