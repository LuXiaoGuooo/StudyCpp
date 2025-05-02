// 案例描述：从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，或者该数字是7的倍数，
// 我们打印敲桌子，其余数字直接打印输出。
#include<iostream>
using namespace std;

int main(){

    for(int i = 1; i <= 100; i++){
        if(i <10){
            if(i == 7){
                cout<< "敲桌子" << i <<endl;
            }
        }
        if(i > 10){
            int a = i % 10; //个位
            int b = i / 10; //十位
            if(a == 7 || b == 7 ||i % 7 == 0){
                cout<<"敲桌子："<<i<<endl;
            }
        }
    }
    return 0;
}