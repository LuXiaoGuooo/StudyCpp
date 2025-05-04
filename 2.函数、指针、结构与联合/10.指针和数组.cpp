// **利用指针访问数组中元素
#include<iostream>
using namespace std;

int main(){
    int arr[] = { 1, 2, 3, 4, 5 };
    int * p = &arr[2];

    cout<< *p << endl;
    cout << p <<endl;
    // cout << p+1 << endl;
    // cout << *(p+1) << endl;

    // for(int i =0; i< 5; i++){
    //     cout<<*p<<endl;
    //     p++;
    // }

    return 0;
}