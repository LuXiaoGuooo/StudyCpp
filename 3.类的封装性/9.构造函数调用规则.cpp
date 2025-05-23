#include<iostream>
using namespace std;
class Person{
public:
    Person(){
        cout<<"默认构造函数"<<endl;
    }
    Person(int age){
        cout<<"有参构造函数"<<endl;
        m_Age = age;
    }
    Person(const Person &p){
        cout<<"拷贝构造函数"<<endl;
        m_Age = p.m_Age;
    }
    ~Person(){
          cout<<"析构构造函数"<<endl;
    }
int m_Age;
};

void test01()
{
    Person p;
    p.m_Age = 20;
    Person p2(p);

    cout<<"p2的年龄为："<<p2.m_Age<<endl;
}
int main(){
    test01();
    return 0;
}

/*
笔记：
构造函数调用规则：
默认情况下，c++编译器至少给一个类添加3个函数
1. 默认构造函数
2. 默认析构函数
3. 默认拷贝构造函数

构造函数调用规则如下：
- 如果用户定义有参构造函数，c++不在提供默认无参构造函数，但是会提供拷贝构造函数
- 如果用户定义拷贝构造函数，c++不会提供其他构造函数
*/