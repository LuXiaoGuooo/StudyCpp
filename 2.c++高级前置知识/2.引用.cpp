#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int &b = a;
    cout << a <<endl;
    cout << b <<endl;

    b = 100;
    cout << a <<endl;//100
    cout << b <<endl;//100

    return 0;
}

/*
笔记：
作用：给变量起别名
语法：数据类型 & 别名 = 原名
注意事项：
1. 引用必须初始化
2. 一旦初始化之后，不可以改变
*/