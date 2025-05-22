/* 笔记
1. 将所有成员属性设置为私有，可以自己控制读写权限
2. 对于写权限，我们可以检测数据的有效性
*/
#include<iostream>
using namespace std;

class Student{
private: 
  string m_Nmae;
  int m_Age;
  string m_Lover;
public:
  //1. 名字可读可写
   void setName(string name){
    m_Nmae = name;
   }
   string getName(){
    return m_Nmae;
   }

   //2. 年龄可读
   int getAge(){
    return m_Age;
   }
   //3.偶像可写
   void setLover(string lover){
    m_Lover = lover;
   }
};

int main(){
    Student s;
    s.setName("张俊桦");
    cout<<s.getName()<<endl;

    return 0;
}