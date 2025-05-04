#include<iostream>
using namespace std;

int main(){ 
    int a = 10;
    int b = 20;

    //1. const 修饰的是指针，指针指向可以改，但是指针指向的值不可以改 常量指针
    // const int *p = &a;
    // p = &b;
    // *p = 100;
    // 不能直接 p = 100；因为 p 是一个指针，存放的是内存地址，不能是一个数据

    //2. const 修饰的是常量，指针指向不可以改，指针指向的值可以更改
    // 指针常量
    int * const p2 = &a;
    // p2 = &b;
    *p2 = 200;

    // 3. const 既修饰指针 又修饰常量
    const int * const p3 = &a;
    p3 = &b;//错误
    *p3 = 200;//错误
    cout << *p2 << endl;
    return 0;
}

// 看const右侧紧跟着的是指针还是常量, 是指针就是常量指针，是常量就是指针常量

/*
const修饰有三种情况
1. const 修饰指针 -- 常量指针
2. const 修饰常量 -- 指针常量
3. const 既修饰指针，又修饰常量
*/