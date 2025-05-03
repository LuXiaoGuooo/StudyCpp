#include<iostream>
using namespace std;

int main(){
    cout<< " 1 " << endl;

    goto FlAG;
    cout<< "2" <<endl;

    FlAG:
    cout<< "9" << endl;
    return 0;
}

// goto语句
// 如果标记的名称存在，执行到goto语句时，会跳转到标记的位置
// 直接被跳过去了，没有执行2
// 在程序中不建议使用goto语句，以免造成程序流程混乱