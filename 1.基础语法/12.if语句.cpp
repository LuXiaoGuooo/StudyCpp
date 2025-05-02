//题目，输入一个成绩，大于90 就是很优秀，小于90 就是垃圾
#include<iostream>
using namespace std;

int main(){
    int score = 0;

    cout<< "请输入你的高考成绩: "<<endl;
    cin >> score ;
    if(score >= 90){
        cout<<"你很优秀";
    }else if(score >= 80){
        cout<< "勉勉强强";
    }else{
        cout<< "你是废物吗？"<<endl;
    }

    return 0;
}