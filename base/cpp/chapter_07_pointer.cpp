//
// Created by issuser on 2019/7/19 0019.
//
/**
 * 第七章 数组 指针(C++重点难点) 引用
 */
#include "chapter_07_pointer.h"
#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;
int average(int a,int b);
/**
 * 7.4指针

7.4.1变量与指针
指针是一种数据类型，通常所说的指针就是指针变量，它是一个专门用来存放地址的变量，而变量的指针主要指变量在内存中的地址。变量的地址在编写代码时无法获取，只有在程序运行时才可以得到。
1.指针的声明

2.指针的赋值
指针可以在初始化时赋值，也可以在后期赋值。

通过变量名访问一个变量是直接的，而通过指针访问一个变量是间接的。
3.关于指针使用的说明
（1）指针变量名是p，而不是*p。p=&i的意思是取变量i的地址赋给指针变量p。
（2）指针变量不可以直接赋值。
（3）不能将*p当变量使用。

7.4.2指针运算符和取地址运算符
1.指针运算符和取地址运算符简介
*和&是两个运算符，*是指针运算符，&是取值运算符。
3.&*p和*&a的区别
&和*的运算符优先级别相同，按自右而左的方向结合，因此
&*p是先进行*运算，*p相当于变量a；再进行&运算，&*p就相当于取变量a的地址。
*&a是先计算&运算符，&a就是取变量a的地址；然后进行*运算，*&a就相当于取变量a所在地址的值，实际就是变量a。
7.4.3指针运算
指针变量存储的是地址值，对指针作运算就等于对地址作运算。
指针变量时必须指定一个数据类型。
指针变量的数据类型用来指定该指针变量所指向数据的类型。

 *
 */

void BasePointer(){
    int number = 100;
    int *intPointer = &number;//把100的内存地址给指针intPointer
    printf("%d\n",intPointer);//获取地址值
    printf("%d\n",intPointer++);//获取地址值 指针地址值运算
    printf("%d\n",intPointer--);//获取地址值 指针地址值运算

    //使用指针比较2个数的大小
    int a =100,b=200;
    int *pa,*pb,*pc;
    pa = &a;
    pb=&b;
    if(a>b){
        pc = pa;
        pa=pb;
        pb = pc;
    }
    cout<<a<<endl;
    cout<<b<<endl;
}

/**
 * 7.5指针与数组

7.5.1数组的存储

数组中第一个元素的存储地址就是整个数组的存储首地址，该地址放在数组名中。

7.5.2指针与一维数组

如果把数组的地址赋给指针变量，就可以通过指针变量来引用数组。
引用数组元素有两种方法：下标法和指针法。
通过指针引用数组，就要先声明一个数组，再声明一个指针。然后通过&运算符获取数组中元素的地址，再将地址值赋给指针变量。通过指针变量获取数组中的元素。
程序中使用指针获取数组首元素的地址，也可以将数组名赋值给指针，然后通过指针访问数组。

程序中还可以使用数组地址来进行计算，用a+i表示数组a中的第i个元素的地址，然后通过指针运算符就可以获得数组元素的值。
7.5.3指针与二维数组
可以将一维数组的地址赋给指针变量，同样也可以将二维数组的地址赋给指针变量，因为一维数组的内存地址是连续的，二维数组的内存地址也是连续的，所以可以将二维数组看作是一维数组。二维数组中各元素的地址如图
7.5.4指针与字符数组
字符数组是一个一维数组，使用指针同样也可以引用字符数组。
引用字符数组的指针为字符指针字符指针就是指向字符型内存空间的指针变量
7.6指向函数的指针
一个函数在编译时被分配给一个入口地址，这个函数入口地址就称为函数的指针。可以用一个指针变量指向函数，然后通过该指针变量调用此函数。

 *
 *
 */

void OneArrayPointer(){
    int a[10];
    for (int i = 0; i <10 ; i++) {
        a[i]=i;
    }
    int *p= &a[0];//把数组的第一个元素的地址赋给指针
    for (int j = 0; j < 10; j++,p++) {
        cout<<*p<<endl;
    }
    /*把数组名赋给指针*/
    int *p2 = a;
    for (int j = 0; j < 10; j++,p++) {
        cout<<*p<<endl;
    }
    for (int j = 0; j < 10; j++) {
        cout<<*(a+j)<<endl;
    }
}

void TwoArrayPointer(){
    /*遍历二维数组*/
    int array1[3][3]= {1,2,3,4,5,6,7,8,9};
    int *p;
    p= array1[0];
    for (int i = 0; i < 9; i++) {
        cout<<array1[i];
        cout<<*p++<<endl;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <3 ; ++j) {
            cout<<*(*(array1+i)+j)<<endl;
        }
    }
}


/*函数指针*/
void FunctionPointer(){
    int result = average(30,10);
    cout<<result<<endl;
    /*  定义函数指针*/
    int (*pFun)(int,int);
    pFun = average;
    cout<<(*pFun)(30,10)<<endl;
}
/*求平均值*/
int average(int a,int b){
    return (a+b)/2;
}

/**
 * 7.8指针数组

数组中的元素均为指针变量的数组称为指针数组

指针数组中的数组名也是一个指针变量，该指针变量为指向指针的指针。

第一次进行指针*运算获取到的是一个地址值，再进行一次指针*运算，就可以获取到具体值。
 */
void PointerArray(){

    cout<<"operate array pointer"<<endl;
    /*为了防止内存泄露*/
    char *name[] = {"a","b","d","c"};
    int n = 4;
    sort(name,n);
    print(name,n);
}
/*字符串排序*/
void sort(char *name[],int n){
    char *temp;
    int k;
    for (int i = 0; i <n-1 ; i++) {
        k =i;
        for (int j = 0; j <n ; j++) {
            if(strcmp(name[k],name[j])>0){
                k=j;
            }
            if(k!=i){
                temp = name[i];
                name[i]=name[k];
                name[k]=temp;
            }
        }
    }
}
/*打印字符串数组*/
void print(char *name[],int n){
    int i=0;
    char *p;
    p=name[0];
    while(i<n){
        p=*(name+i++);
        cout<<p<<endl;
    }

}