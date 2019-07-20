//
// Created by issuser on 2019/7/19 0019.
//
/**
 * 第七章 数组 指针(C++重点难点) 引用
 */
#include "chapter_07_array.h"
#include <cstring>
#include <cstdlib>
#include <iostream>
using namespace std;
/**
 * 7.1一维数组

7.1.1一维数组的声明
将同一数据类型的数据有序地组织起来的集合就称为数组

7.1.2一维数组的引用

7.1.3一维数组的初始化
（1）单一数组元素赋值
（2）聚合方式赋值
 *
 */
void OneArray(){
    int oneArray1[3];
    oneArray1[0]=1;
    oneArray1[1]=2;
    oneArray1[2]=3;
    int oneArray2[]={1,2,3};
    cout<<oneArray2[2]<<endl;
}
/**
 *7.2二维数组

7.2.1二维数组的声明

7.2.2二维数组元素的引用

7.2.3二维数组的初始化
分为单个元素逐一的赋值和使用聚合方式赋值。
 *
 */
void TwoArray(){
    int twoArray1[2][2];
    twoArray1[0][0]=1;
    twoArray1[0][1]=2;
    twoArray1[1][0]=3;
    twoArray1[1][1]=4;
    int twoArray2[2][2]={{1,2},{3,4}};
    int twoArray3[2][2]={1,2,3,4};

    int array4[3][3] = {1,2,3,4,5,6,7,8,9};
    for(int i =0;i<3;i++){
        for(int j =0;j<i;j++){
            int t = array4[i][j];
            array4[i][j]=array4[j][i];
            array4[j][i]=t;
        }
    }

}
/**
 *
 *7.3字符数组
字符数组中的一个元素存放一个字符。字符数组具有数组的共同属性。
1.声明一个字符串数组
2.字符串数组赋值方式可以对数组元素逐一赋值。聚合方式只能在数组声明时使用。

 */
void StringArray(){
    char charArray[] = {'H','E','L','L','0'};
    char stringArray[]="HelloWorld";

}
/**
 *3.字符函数
strcat字符连接函数
strcpy字符复制函数
strcmp字符比较函数  相等返回0 前者大于后者返回 正数 后者大于前者返回 负数
strlen字符长度

 *
 */
void CharArrayMethod(){
    /*字符串操作需要导入包*/
    char a[20] = "GoldenGlobal";
    char b[20]="abc";
    strcat(a,b);
    char d1[20];
    strcpy(a,d1);
    cout<<strlen(a)<<endl;
    cout<<strcmp(a,b)<<endl;
}