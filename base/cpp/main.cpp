/*头文件*/
#include <iostream>
#include "chapter_01_hello.h"
#include "chapter_02_datatype.h"
#include "chapter_03_expression.h"
#include "chapter_04_judgment.h"
#include "chapter_05_cycle.h"
#include "chapter_06_function.h"
#include "chapter_07_array.h"
#include "chapter_07_pointer.h"
#include "chapter_07_reference.h"
/*命名空间*/
using namespace std;


/*main方法*/
int main() {
    std::cout << "chapter_01>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    cout<<ShowMessage()<<endl;
    std::cout << "<<<<<<<<<<<<<<<<<<<<chapter_01" << std::endl;

    std::cout << "chapter_02>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    Constant();
    Variable();
    InputAndOutput();
    std::cout << "<<<<<<<<<<<<<<<<<<<<chapter_02" << std::endl;

    std::cout << "chapter_03>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    Operator();
    Priority();
    Expression();
    std::cout << "<<<<<<<<<<<<<<<<<<<<chapter_03" << std::endl;

    std::cout << "chapter_04>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    IfElse();
    Switch(88);
    LeapYear(2018);
    std::cout << "<<<<<<<<<<<<<<<<<<<<chapter_04" << std::endl;

    std::cout << "chapter_05>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    While();
    DOWhile();
    For();
    MultiplicationTable();
    std::cout << "<<<<<<<<<<<<<<<<<<<<chapter_05" << std::endl;

    cout << "chapter_06>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    DeclareFunction();
    CallBackFunction();
    FactorialRecursive(3);
    OverloadFunction();
    OverloadFunction(1,2);
    InlineFunction();
    ManyVariable();
    cout << "<<<<<<<<<<<<<<<<<<<<chapter_06" << endl;

    cout << "chapter_07>>>>>>>>>>>>>>>>>>>>>>>" << endl;
    OneArray();
    TwoArray();
    StringArray();
    CharArrayMethod();
    BasePointer();
    OneArrayPointer();
    FunctionPointer();
    PointerArray();
    BaseReference();
    cout << "<<<<<<<<<<<<<<<<<<<<chapter_07" << endl;
    return 0;
}