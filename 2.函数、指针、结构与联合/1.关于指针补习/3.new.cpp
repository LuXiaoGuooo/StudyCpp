#include<iostream>
using namespace std;

int main(){
    /*
    1.声明一个指针
    2.用new运算符向系统申请一块内存，让指针指向这块内存
    3.通过对指针解引用的方法，像使用变量一样使用这块内存
    4.如果这块内存不用了，用delete释放它
    申请内存： new 数据类型(初试值)；
    释放内存：delete 地址；
    */
   int *p =new int(5);
   cout << "*p= "<< *p <<endl;

   *p = 8;
   cout << "*p= "<< *p <<endl;

   delete p;
}