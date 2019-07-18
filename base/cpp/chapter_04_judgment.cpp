//
// Created by issuser on 2019/7/18 0018.
//
/**
 * 第4章条件判断语句
 *
 */
#include "chapter_04_judgment.h"
#include <iostream>
using namespace std;
/**
 * 4.2判断语句的三种形式
 * 4.2.1第一种形式的判断语句 if
4.2.2第二种形式的判断语句 if else
4.2.3第三种形式的判断语句 if else if else
 */
void IfElse(){

    int a = 1;
    double pi = 3.14;
    if(sizeof(a)< sizeof(pi)){
        cout<<a<<endl;
    }

    int b = 2;
    if(b>a){
        cout<<b<<endl;
    }else{
        cout<<a<<endl;
    }

    int c = 3;
    if(c>b){
        cout<<c<<endl;
    }else if(c<5){
        cout<<b<<endl;
    }else {
        cout<<c<<endl;
    }
}
/**
 * 4.3 条件运算符 即三目运算符 a<b?c:d
 *4.4 switch 分支语句
 *
 */
void Switch(int score){
    cout<< (1+2<4?1:2)<<endl;
    score = (score/10)*10;
    switch (score){
        case 90:
            cout<<"Level A"<<endl;
            break;
        case 80:
            cout<<"Level B"<<endl;
            break;
        case 70:
            cout<<"Level C"<<endl;
            break;
        case 60:
            cout<<"Level D"<<endl;
            break;
        default:
            cout<<"Level E"<<endl;
            break;
    }
}
/**
 * 4.4 条件表达式的嵌套 判断是否闰年
 */
void LeapYear(int year){
    if((year%4==0&&year%100!=0) || (year%400 ==0)){
        cout<<"This is leap year"<<endl;
    }else {
        cout<<"This not is leap year"<<endl;
    }
}