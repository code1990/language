//
// Created by issuser on 2019/7/18 0018.
//
/**
 * 第5章 循环语句
 *
 */
#include "chapter_05_cycle.h"
#include <iostream>
using namespace std;

/*
 * 5.1 while循环
 * */
void While(){
    int i =0;
    while(i<=3){
        cout<<i<<endl;
        i++;
    }
}
/*
 * 5.2 do...while循环
 * */
void DOWhile(){
    int i =5;
    do{
        cout<<i<<endl;
        i--;
    }while(i>=5);
}
/*
 * 5.4 for循环
 * 5.5 循环控制
 *
 * break :退出当前循环
 * continue:结束当前循环 继续下次循环
 * goto:无条件跳转
 * */
void For(){
    for (int i = 0; i < 3; i++) {
        if(i%2==0){
            cout<<"even"<<endl;
        }else{
            cout<<"odd"<<endl;
        }
    }
}
/**
 * 5.6循环嵌套 打印9*9乘法表
 */
void MultiplicationTable(){
    for (int i = 1; i <=9 ; i++) {
        for (int j = 1; j <=i ; j++) {
            cout<<i<<"*"<<j<<'='<<(i*j)<<' ';
        }
        cout<<endl;
    }
}