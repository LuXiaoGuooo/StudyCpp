#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 10; i++){
        if(i == 5){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}


// 笔记
// 跳过本次循环中余下尚未执行的语句，继续执行下一次循环