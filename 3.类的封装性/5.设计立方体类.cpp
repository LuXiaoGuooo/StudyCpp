/*设计立方体类
设计立方体类(Cube)
求出立方体的面积和体积
分别用全局函数和成员函数判断两个立方体是否相等。
*/
#include<iostream>
using namespace std;

class Cube{
private:
  int m_H;
  int m_L;
  int m_W;
public:
  //写高
  void SetH(int h){
    m_H = h;
  }
  //获取高
  int GetH(){
    return m_H;
  }
  //写长
  void SetL(int l){
    m_L = l;
  }
  //获取长
  int GetL(){
    return m_L;
  }
   //写宽
  void SetW(int w){
    m_W = w;
  }
  //获取宽
  int GetW(){
    return m_W;
  }
  //获取体积
  int getSame(){
    return m_H * m_W * m_L;
  }
  //利用成员函数判断
  bool isSameByClass(Cube &c){
    if(m_L == c.GetL()){
        return true;
    }
    return false;
  }
};
bool sameB(Cube &c1, Cube &c2){
    if(c1.getSame() == c2.getSame()){
        return true;
    }
    return false;
}
int main(){
    Cube c1;
    c1.SetH(20);
    c1.SetL(20);
    c1.SetW(20);
    cout<<"c1的体积："<<c1.getSame()<<endl;
    
    Cube c2;
    c2.SetH(20);
    c2.SetL(20);
    c2.SetW(20);
    
    bool ret = c1.isSameByClass(c2);

    cout<<"c1 和 c2的体积"<<(ret == 1 ? "相等" : "不想等")<<endl;
    return 0;
}