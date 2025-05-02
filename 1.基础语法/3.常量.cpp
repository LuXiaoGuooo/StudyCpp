#include<iostream>
using namespace std;
// #define 是 C/C++ 中的预处理器指令，用于在编译前对代码进行文本替换，不属于cpp愈发本身
// 1. 注意：末尾不加分号（不是 C++ 语句），直接换行结束。
#define day 7

int main(){
    cout<< "一周一共有"<< day << "天" << endl;
    
    const int month = 12;
    cout<< "一年有" << month << "月" << endl;
}

/*

*/