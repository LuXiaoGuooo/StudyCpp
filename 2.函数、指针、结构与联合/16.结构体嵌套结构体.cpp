#include<iostream>
using namespace std;
// 1.学生结构体定义
struct student{
    string name;
    int age;
    int score;
};
// 2.教师结构体定义
struct teacher{
    int id;
    string name;
    int age;
    struct student stu;
};

int main() {
    struct teacher t1;
    t1.id = 1;
    t1.name = "张老师";
    t1.age = 30;
    t1.stu.name = "陈同学";
    t1.stu.age = 18;
    t1.stu.score = 200;

    cout << "教师： "<<t1.name <<"的学生是："<<t1.stu.name<<endl;
    return 0;
}

//**总结：**在结构体中可以定义另一个结构体作为成员，用来解决实际问题