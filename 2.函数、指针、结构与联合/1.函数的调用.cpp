#include<iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    int a = 20;
    int b = 50;
    int nums = add(a, b);
    cout<<"a + b为："<<nums<<endl;

    return 0;
}