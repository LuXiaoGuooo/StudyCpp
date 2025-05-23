#include<iostream>
using namespace std;

class Student{
public:
    int age;
    Student(){
        cout<<"默认构造函数"<<endl;
    }
    Student(int a){
        age = a;
         cout<<"有参构造函数"<<age<<endl;
    }
    //拷贝构造函数      
    Student( const Student &s1 ){
        age = s1.age;
        cout<<"拷贝构造函数"<<age<<endl;
    }
};

int main(){
/*
调用：
1. 括号法
2. 显示法
3. 隐式转换法
*/
    // Student s;
    // Student s1(20);
    // Student s2(s1);

    // 2.显示法
    // Student s1 = Student(20);
    // Student s2 = Student(s1);

    //3.隐式转换法
    Student s1 = 20;
    Student s2 = s1;
    return 0;
}