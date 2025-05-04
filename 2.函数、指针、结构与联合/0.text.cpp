#include<iostream>
using namespace std;

int main(){
    int a = 20;

    int * p = & a;

    cout << &a<< endl;
    cout << *p << endl;
    cout << p << endl;
    
    return 0;
}