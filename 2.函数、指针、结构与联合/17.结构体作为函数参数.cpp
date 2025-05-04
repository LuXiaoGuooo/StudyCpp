#include<iostream>
using namespace std;

// 学生结构体定义
struct student {
    string name;
    int age;
    int score;
};
// 值传递
void printStudent(student stu){
    stu.age = 20;
    cout<<"子函数中姓名："<<stu.name<<"年龄："<<stu.age<<"成绩："<<stu.score<<endl;
};
// 地址传递
void printStudent2(student * stu){
    stu -> age = 30;
    cout<<"子函数中姓名："<<stu -> name<<"年龄："<<stu -> age<<"成绩："<<stu -> score<<endl;
};

int main(){
    student stu = {"张三",10,100};
    // 1.值传递
    printStudent(stu);
    cout<<"子函数中姓名："<<stu.name<<"年龄："<<stu.age<<"成绩："<<stu.score<<endl;
    // 2.地址传递
    printStudent2(&stu);
    cout<<"子函数中姓名："<<stu.name<<"年龄："<<stu.age<<"成绩："<<stu.score<<endl;
}