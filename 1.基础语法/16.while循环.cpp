#include<iostream>
using namespace std;

int main(){
    int num = 0 ;
    while(num < 10){
        cout<<"num: "<<num<<endl;
        num++;
    }
    return 0;
}

// 笔记
// 在执行循环语句时候，程序必须提供跳出循环的出口，否则出现死循环