#include<iostream>
using namespace std;

// 引用传递
void temp(int & a, int & b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 20;
    int b = 30;
    temp(a, b);
    cout << a <<endl;
    cout<< b <<endl;
    return 0;
}


/*
笔记
作用：函数传参时，可以利用引用的技术让形参修饰实参
优点：可以简化指针修改实惨
*/