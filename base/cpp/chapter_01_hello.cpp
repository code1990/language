//
// Created by issuser on 2019/7/18 0018.
//
/*
 *  c++ 第一章 Hello World
 *
 * */
/*申明写在.h文件，定义实现写在.cpp文件*/
#include "chapter_01_hello.h"

/*简单的代码调用 了解C++*/
int ShowMessage(){
    try{
        cout<<"Hello World"<<endl;
        return 0;
    }catch (...){
        cout<<"throw Exception";
        throw "error occurred";
    }
}