/*头文件*/
#include <iostream>
#include "chapter_01_hello.h"
#include "chapter_02_datatype.h"
/*命名空间*/
using namespace std;


/*main方法*/
int main() {
    std::cout << "chapter_01>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    cout<<ShowMessage()<<endl;
    std::cout << "<<<<<<<<<<<<<<<<<<<<chapter_01" << std::endl;

    std::cout << "chapter_02>>>>>>>>>>>>>>>>>>>>>>>" << std::endl;
    DefineConstant();
    DefineVariable();
    InputAndOutput();
    std::cout << "<<<<<<<<<<<<<<<<<<<<chapter_02" << std::endl;
    return 0;
}