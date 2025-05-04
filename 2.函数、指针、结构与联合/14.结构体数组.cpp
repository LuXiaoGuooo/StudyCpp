#include<iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

int main(){
    // 结构体数组
    struct student arr[3] = {
        {"小李", 29, 30},
        {"王五", 23, 90},
        {"张三", 00, 99}
    };

    for(int i = 0 ; i < 3; i++){
        cout<<"姓名："<<arr[i].name<<"年龄；"<<arr[i].age<<"成绩：" <<arr[i].score<<endl;
    }
    return 0;
}