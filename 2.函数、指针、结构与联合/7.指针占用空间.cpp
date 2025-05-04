#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int * p;
    p = &a;//指针指向数据a的地址

    cout << *p <<endl;
    cout << sizeof(p)<<endl;
    cout << sizeof(char *) << endl;
    cout << sizeof(float *) << endl;
    cout << sizeof(double *) << endl;

    return 0;
}

/*
无论指针指向什么类型（如 int*、char*、double*），它们占用的空间是相同的。
定义一个指针
int * p
使用指针 可以用 * 操作符 ， 操作变量指向的内存空间，这个过程称之为解引用。
1. 可以通过 & 符号 记录地址
比如说
p = &a;
使用的时候直接
*p 就可以了
*/