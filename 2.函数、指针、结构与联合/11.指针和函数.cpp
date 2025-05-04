#include<iostream>
using namespace std;

// 指针（int*）：存储的是 内存地址，通过它可以访问该地址上的数据
void swap2(int * a, int * b){
    int temp = * a;
    * a = * b;
    * b = temp;
}

int main(){
    int a = 20;
    int b = 60;

    swap2(&a, &b);
    cout << a << endl;
    cout << b << endl;

    return 0;
}