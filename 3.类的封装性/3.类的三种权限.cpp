#include<iostream>
using namespace std;

class Person {
  public:  string m_Name;

  protected: string m_Car;

  private: string m_Password;

public :
    void func(){
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 1233445;
    }

};

int main(){
    Person p;
    p.m_Name = "里斯";

    

}