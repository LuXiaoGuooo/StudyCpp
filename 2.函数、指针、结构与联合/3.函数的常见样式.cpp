#include<iostream>
using namespace std;

 // 1.无参无返
 void test01(){
    int a = 10;
    cout<<"this is test01"<<endl;
}
// 2.有参无返
void test02(int a){
    cout<<"a = "<< a << endl;
}
// 3.无参有返
int test03(){
    return 10;
}
// 3.有参有返
int test04(int a, int b ){
    cout<<"。。。。不想说了，大家都会，太基础了";
}
int main(){
    int num = test03();
    cout<<num<<endl;
    return 0;
}