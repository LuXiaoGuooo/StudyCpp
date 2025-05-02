#include<iostream>
using namespace std;

int main() {
    cout<< sizeof(short) <<endl;
    cout<< sizeof(int) <<endl;
    cout<< sizeof(long) <<endl;
    cout<< "long long多少： " << sizeof(long long)<<endl;

    return 0;
}

/*

一.基本数据类型
1. 整形
short 2字节 -32768 ～ 32767 
int  4字节 -2.1亿 ~ 2.1亿 
long 4或8字节 更大范围
long long 8字节 -9×10¹⁸ ~ 9×10¹⁸ 
2. 浮点型
float 4字节
double 8字节
3. 字符型
chart 1字节 存ASCII字符
wchar_t 2字节或8字节
4. 布尔类型
bool 1字节


*/