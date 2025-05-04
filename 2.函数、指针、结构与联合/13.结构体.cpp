#include<iostream>
#include<string>
using namespace std;

// 结构体定义
struct student{
    string name;
    int age;
    int score;
}stu3;//结构体创建方式 3

int main(){
    // 1.结构体创建方式 1
    struct student stu1;
    stu1.name = "小李";
    stu1.age = 20;
    stu1.score = 100;

    cout<<"姓名："<<stu1.name<<"年龄；"<<stu1.age<<"成绩：" <<stu1.score<<endl;

    // 2.结构体创建方式 2
    struct student stu2 = { "小刘", 30, 200 };
    cout<<"姓名："<<stu2.name<<"年龄；"<<stu2.age<<"成绩：" <<stu2.score<<endl;

    // 3.结构体创建方式 3
    stu3.name = "笑话";
    stu3.age = 20;
    stu3.score = 233;
    cout<<"姓名："<<stu3.name<<"年龄；"<<stu3.age<<"成绩：" <<stu3.score<<endl;

    /*
    1.定义结构体的关键字是struct 不能省略
    2. 创建结构体变量时，关键字struct可以省略
    3. 结构体变量利用操作符 . 访问成员
    */
    return 0;
}


/*
结构体属于用户==自定义的数据类型==，允许用户存储不同的数据类型
语法: `struct 结构体名 { 结构体成员列表 }；`

通过结构体创建变量的方式有三种：
* struct 结构体名 变量名
* struct 结构体名 变量名 = { 成员1值 ， 成员2值...}
* 定义结构体时顺便创建变量
*/