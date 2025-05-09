#include<iostream>
using namespace std;

int main(){
    int a = 3, b = 8;
    // 常量指针的语法 const 数据类型 * 变量名;
    // 不能通过解引用的方法修改内存地址的值（用原始变量名是可以修改的）
    const int*p = & a;
    p = &b;
    // 报错
    // *p = 100;
    cout << "a = " << a <<  " *p: "<< *p <<endl;

    return 0;
}