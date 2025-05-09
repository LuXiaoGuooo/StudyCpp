#include<iostream>
using namespace std;

int main(){
    int a;
    char b;
    bool c;
    string d;

    int *pa = &a;
    char *pb = &b;
    bool *pc = &c;
    string *pd = &d;

    cout << pa <<endl;

    return 0;
}