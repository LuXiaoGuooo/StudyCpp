#include<iostream>
using namespace std;

int* func()
{
	int* a = new int(10);
	return a;
}

int main(){
    // 1.基本语法
    // int *p = func();
    // cout << *p << endl;
    // cout << p <<endl;

    // delete p;

    // 2.开辟数组
    int * arr = new int[10];
    for(int i = 0; i < 10; i++){
        arr[i] = i + 100;
    }
    for(int i = 0 ; i < 10 ; i ++){
        cout << arr[i] <<endl;
    }
    // 释放数组后面要加 []
    delete [] arr;
    return 0;
}


/*
笔记：
c++利用new操作符在堆区开辟数据
堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符delete
语法： new 数据类型
利用new 创建的数据，会返回该数据对应类型的指针
*/