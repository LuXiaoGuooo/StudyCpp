#include<iostream>
using namespace std;

class Person{
public:
 Person(){
    cout<<"无参构造函数!"<<endl;
 }
 Person(int age, int height){
    cout<<"有参构造函数"<<endl;

    m_age = age;
    m_height = new int(height);

 }
 Person(const Person &p){
    cout<<"拷贝构造函数"<<endl;
    m_age = p.m_age;
  
    //深拷贝
    m_height = new int(*p.m_height);
 }
public:
int m_age;
int* m_height;
};
void test01(){
    Person p1(20, 30);

    Person p2(p1);


}
int main(){


    return 0;
}

/*
笔记：
浅拷贝：简单的赋值拷贝操作
深拷贝：在堆区重新申请空间，进行拷贝操作
*/