#include<iostream>
#include<string>
using namespace std;

int main(){
    int a , b , c;
    string Max;
    cout<<"请输入小猪a的体重"<<endl;
    cin>>a;
    cout<<"请输入小猪b的体重"<<endl;
    cin>>b;
    cout<<"请输入小猪c的体重"<<endl;
    cin>>c;
    int max = a;
   if(b > max){
        max = b;
        Max = "猪猪b";
    }
    if(c >max){
        max = c;
        Max = "猪猪c";
    }
    cout<<"猪猪"<<Max<<"最胖"<<endl;
    return 0;
}