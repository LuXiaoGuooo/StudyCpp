#include<iostream>
using namespace std;

// 需求：设计一个学生类，属性有姓名和学号，可以给姓名和学号赋值，可以显示学生的姓名和学号

class Student {
 public: 
   void setName(string name){
    m_name = name;
   }
   void setID(int id){
    m_id = id;
   }
   void showStudent(){
    cout << "name" << m_name << "ID: "<< m_id << endl;
   }
public:
  string m_name;
  int m_id;
};

int main(){
    Student stu;
    stu.setName("老子小李");
    stu.setID(20);
    stu.showStudent();
    return 0;
}
