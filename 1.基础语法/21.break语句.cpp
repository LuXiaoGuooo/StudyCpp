#include<iostream>
using namespace std;

int main(){
    for(int i = 0 ; i < 10 ; i++){
      for(int j = 0; j < 10 ; j++){
        if(j == 5){
            break;
        }
        cout<< " * " ;
      }
      cout<<endl;
    }
    return 0;
}

// 笔记
// break语句
// 1.出现在switch语句时，作用是终止case并跳出switch
// 2.出现在循环语句时，作用是跳出当前循环语句
// 3.出现在嵌套循环中，跳出最近的内层循环语句