//
// Created by issuser on 2019/7/20 0020.
//
/**
 * 第8章结构体
 *
 * 结构体可以将不同奏型组合在一起形成一个新的类型，这个类型是对数据的整合，以使代码更加简洁。
共用体和结构体很相近，它像一个存储空间可变的数据奏型，使程序设计更加灵活。
枚举则是特殊的常量，可以增加代码的可读性；
自定义类型更是增加了代码的复用性。

 */
#include "chapter_08_structure.h"
#include <cstring>
#include <iostream>
using namespace std;

void ShowStructMessage(struct Person person);
void ShowStructMessage(struct Person *person);
/**
 *8.1.1结构体定义
整型、长整型、字符型、浮点型这些数据类型只能记录单一的数据，这些数据类型只能被称作基础数据类型。

如果有一个类型可以将这些变量包含在一起，则会大大减少程序代码的离散性，使程序代码阅读更加符合逻辑。结构体则是实现这一功能的类型。结构体类型名是一种标识符，该标识符代表一个新的变量。

8.1.2结构体变量

结构体变量有两种声明形式。
第一种声明形式是在定义结构体后，使用结构体类型名声明。
另一种声明形式是定义结构体时直接声明。例如：

8.1.3结构体成员及初始化
引用结构体成员有两种方式，
一种是声明结构体变量后，通过成员运算符"."引用；
一种是声明结构体指针变量，使用指向">"运算符引用。

8.1.4结构体的嵌套
在定义结构体时可以声明其他已定义好的结构体变量，也可以在定义结构体时定义子结构体。

8.1.5结构体大小
结构体变量的大小是定义结构体时各成员大小之和

8.2结构体与函数

结构体数据类型在C++语言中是可以作为函数参数传递的，可以直接使用结构体变量作函数的参数，
也可以使用结构体指针变量作函数的参数。

8.2.1结构体变量作函数参数
可以把结构体变量当普通变量一样作为函数参数，这样可以减少函数参数的个数，使代码看起来更简洁。

8.2.2结构体指针作函数参数
使用结构体指针变量作函数参数时传递的只是地址，减少了时间和空间上的开销，能够提高程序的运行效率。

8.3结构体数组
数组的元素也可以是结构类型的，因此可以构成结构体数组。

8.3.1结构体数组声明与引用
结构体数组可以在定义结构体时声明，可以使用结构体变量声明，也可以直接声明结构体数组而无须定义结构体名。
（1）在定义结构体时直接声明。
（2）使用结构体变量声明。
（3）直接声明结构体数组。

8.3.2指针访问结构体数组
指针变量可以指向一个结构数组，这时结构指针变量的值是整个结构数组的首地址。
结构指针变量也可指向结构数组的一个元素，这时结构指针变量的值是该结构数组元素的首地址。
 *
 */
void BaseStructure(){
    /*声明一个结构体*/
    struct PersonInfo{
      int index;
      char name[30];
      short age;
    };
    /*声明一个结构体变量*/
    PersonInfo personInfo;
    /*结构体变量初始化*/
    personInfo.index=1;
    strcpy(personInfo.name,"张三");
    personInfo.age=20;
    /*使用结构体指针变量引用成员*/
    PersonInfo *personInfo1 = &personInfo;
    cout<<personInfo1->index<<endl;
    cout <<personInfo1->name<< endl;
    cout <<personInfo1->age<<endl;



    /*结构体的长度*/
    cout<< sizeof(PersonInfo)<<endl;

    /*结构体变量作为函数参数调用*/

    /*结构体指针作为函数参数调用*/

    /*结构体数组*/
    PersonInfo personInfo2[2]={{1,"张三",30},{2,"王五",30}};
    PersonInfo *personInfo3 = personInfo2;
    /*使用指针变量访问结构体数组*/
    for (int i = 0; i <2 ; i++,personInfo3++) {
        cout<<personInfo3->index<<endl;
        cout<<personInfo3->name<<endl;
        cout<<personInfo3->age<<endl;
    }
}
/*结构体的嵌套*/
struct Person{
    int index;
    short age;
    struct WorkPlace{
        int number;
        char name[30];
    };
};
/*结构体作为函数参数*/
void ShowStructMessage(struct Person person){
    cout<<person.index<<endl;
    cout<<person.age<<endl;
}
/*结构体指针作为参数*/
void ShowStructMessage(struct Person *person){
    cout<<person->index<<endl;
    cout<<person->age<<endl;
}
/**
 *8.4共用体

共用体数据类型是指将不同的数据类型组织为一个整体，它和结构体有些类似，但共用体在内存中占用首地址相同的一段存储单元。因为共用体的关键字为union，中文意思为联合，所以共用体也称为联合体。

8.4.1共用体的定义与声明定义
声明共用体数据类型变量有以下几种方式。
（1）先定义共用体，然后声明共用体变量。
（2）直接在定义时声明共用体变量。

8.4.2共用体的大小
共用体每个成员分别占有自己的内存单元。共用体变量所占的内存长度等于最长的成员的长度。
一个共用体变量不能同时存放多个成员的值，某一时刻只能存放其中的一个成员的值，这就是最后赋予它的值。

8.4.3共用体的特点
（1）使用共用体变量的目的是希望用同一个内存段存放几种不同类型的数据，但在每一瞬时只能存放其中一种
（2）能够访问的是共用体变量中最后一次被赋值的成员，在对一个新的成员赋值后原有的成员就失去作用。
（3）共用体变量的地址和它的各成员的地址都是同一地址。
（4）不能对共用体变量名赋值；不能企图引用变量名来得到一个值；不能在定义共用体变量时对其初始化；不能用共用体变量名作为函数参数。

 *
 */
void BaseUnion(){

    /*定义公用体同时声明公用体变量*/
    union MyUnion{
        int i;
        char ch;
        float f;
    } myUnion;

    /*共用体变量初始化*/
    myUnion.ch='A';
    myUnion.f=2.1;
    myUnion.i=1;


}
/**
 *8.5枚举类型

枚举就是一一列举的意思，用枚举类型声明的变量，其变量的值只能取自括号内的这些标识符。
8.5.1枚举类型的声明
（1）枚举类型的一般形式。

8.5.2枚举类型变量
在声明了枚举类型之后，可以用它来定义变量。

8.5.3枚举类型的运算
枚举值相当于整数，可以用枚举值来进行一些运算。
（1）利用枚举值作判断比较。
 *
 */
void BaseEnum(){
    /*枚举变量的定义*/
    enum Weekday{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
    int a=2,b=1;
    Weekday  weekday;
    weekday = (Weekday)a;
    cout<<weekday<<endl;
    /*枚举变量的运算 比大小以及减法运算*/
    Weekday day1,day2;
    day1 = Monday;
    day2 = Saturday;
    if(Monday<Saturday){
        cout<<Monday-Saturday<<endl;
    }

}
/**
 *8.6自定义数据类型
这个功能由类型定义符typedef完成。typedef的使用形式如下：
typedef<原类型名><新类型名>
 *
 */
void BaseTypeof(){

    typedef char *CString;
    cout<< sizeof(CString)<<endl;
    typedef int Integer;
    Integer  a =0;
    cout<< sizeof(Integer)<<endl;
}