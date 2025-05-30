/*
题目：
设计一个高效算法，将顺序表L的所有元素逆置，要求算法的空间复杂度为O(1)
*/
#include<iostream>
using namespace std;
//初始化顺序表
struct Sqlist{
    int* elements;
    int length;
};

//逆转元素
void reverseList(Sqlist &list){
    if(list.length == 0) return ;
    int temp;
    for(int i = 0 ; i< list.length /2 ; i++){
        temp = list.elements[i];
        list.elements[i] = list.elements[list.length - 1 - i];
        list.elements[list.length - 1 - i] = temp;
    }
}

int main() {
    // 初始化顺序表
    Sqlist L;
    L.length = 5;
    L.elements = new int[L.length];
    for (int i = 0; i < L.length; ++i) {
        L.elements[i] = i + 1;  // 填充1,2,3,4,5
    }

    // 打印原始顺序表
    cout << "原始顺序表元素: ";
    for (int i = 0; i < L.length; ++i) {
        cout << L.elements[i] << " ";
    }
    cout << endl;

    // 逆置操作
    reverseList(L);

    // 打印逆置后的结果
    cout << "逆置后顺序表元素: ";
    for (int i = 0; i < L.length; ++i) {
        cout << L.elements[i] << " ";
    }
    cout << endl;

    // 释放动态内存
    delete[] L.elements;

    return 0;
}