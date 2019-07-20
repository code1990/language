//
// Created by issuser on 2019/7/19 0019.
//
/**
 *
 *
 */
#include "chapter_07_reference.h"
#include <iostream>
using namespace std;
/**
 * 7.7引用

引用实际上是一种隐式指针，它为对象建立一个别名，通过操作符&来实现。&是取地址操作符，通过它可以获得地址。

使用引用的说明：
（1）一个C++引用被初始化后，无法使用它再去引用另一个对象，它不能被重新约束。
（2）引用变量只是其他对象的别名，对它的操作与原来对象的操作具有相同作用。
（3）指针变量与引用有两点主要区别：一是指针是一种数据类型，而引用不是一个数据类型
（4）引用应该初始化，否则会报错。

 函数参数的传递方式主要有两种，分别为值传递和引用传递。
所谓值传递，是指在函数调用时，将实际参数的值赋值一份传递到调用函数中，这样如果在调用函数中修改了参数的值，其改变不会影响到实际参数的值。
而引用传递则恰恰相反，如果函数按引用方式传递，在调用函数中修改了参数的值，其改变会影响到实际参数。


指针变量可以作为函数参数。使用指针变量传递参数和使用引用传递参数方式的执行效果相同，可以对同一个函数使用两种方式传递参数进行对比，观察程序的执行结果。

7.7.3数组作函数参数

 *
*/

void BaseReference(){
    int a =10;
    int & ia = a;/*声明一个对变量a的引用*/
    ia = 2;/*对于引用的操作 就是对于变量本身的操作*/
    cout<<a<<endl;

    int x=10,y=11;
    if(x<y){
        swap(x,y);
    }
    int array[3][4];
    int (*p)[4];
    p = &array[0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <4 ;j++ ) {
            array[i][j]=rand();
        }
    }
    min(p,3);
}

void swap(int *a,int *b){
    int temp;
    temp =*a;
    *a=*b;
    *b=temp;
    cout<<"======"<<endl;
    cout<<*a<<endl;
    cout<<*b<<endl;
}

void min(int (*a)[4],int m){
    int value;
    for (int i = 0; i <m ; i++) {
        value = *(*(a+i));
        for (int j = 0; j <4 ; j++) {
            if(*(*(a+i)+j)<value){
                value = *(*(a+i)+j);
                cout<<value<<endl;
            }
        }
    }
}