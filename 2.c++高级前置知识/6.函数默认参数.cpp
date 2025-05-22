#include<iostream>
using namespace std;

int func(int a, int b = 10 , int c = 10){
    return a + b + c;
}

int main(){
    cout<<func(20)<<endl;

    return 0;
}