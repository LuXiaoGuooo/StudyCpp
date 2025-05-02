// 案例需求：
// * 提示用户输入一个高考考试分数，根据分数做如下判断
// * 分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
// * 在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
#include<iostream>
using namespace std;

int main(){
    int score = 0 ;
    cout<<"请输入你的高考成绩" <<endl;
    cin >> score;
    if(score >=600){
        cout<<"你能上一本"<<endl;
        if(score>=700){
            cout<<"你能上北京大学"<<endl;
        }else if(score >= 650){
            cout<<"你能上清华大学"<<endl;
        }else{
            cout<<"你能上人大"<<endl;
        }
    }else if(score > 500){
        cout<<"恭喜你只能去二本了"<<endl;
    }else if(score >400){
        cout<<"恭喜你只能去民办本科"<<endl;
    }else{
        cout<<"恭喜你成为大专人，人上人"<<endl;
    }
    return 0;
}