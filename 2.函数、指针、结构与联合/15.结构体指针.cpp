#include<iostream>
using namespace std;

struct student {
    string name;
    int age;
    int score;
};

int main(){
    struct student stu = {"张三", 20, 200};
    struct student *p = &stu;
    p -> score = 90;
    cout<<"姓名："<< p -> name << "成绩："<< p -> score<<endl;

    return 0;
}

/* 
结构体指针可以通过 -> 操作符 来访问结构体中的成员
*/