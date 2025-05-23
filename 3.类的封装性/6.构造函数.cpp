#include<iostream>
using namespace std;

class Student{
public:
/*
1.构造函数
1. 没有返回值，不用写void
2. 函数名 与类名相同
3. 构造函数可以有参数，可以发生重载
4. 创建对象的时候，构造函数会自动调用
*/
   Student(){
    cout<<"Student 构造函数的使用"<<endl;
   }
/*
关于析构函数
1. 没有返回值，不用写void
2. 函数名与类名相同，在名称前加 ~
3. 析构函数不可以有参数，不可以发生重载
4. 对象在销毁前，会自动调用析构函数，而且只会调用一次
*/
 ~ Student(){
    cout<<"Student 析构函数的使用"<<endl;
 }
};
void test01(){
    Student s1;
}

int main(){
    // test01();
    Student s1;
    system("pause");
    return 0;
}