//需求：请给电影评分 
//10 ~ 9   经典   
// 8 ~ 7   非常好
// 6 ~ 5   一般
// 5分以下 烂片
#include<iostream>
using namespace std;

int main(){
    int score;
    cout<<"请打分"<<endl;
    cin >> score;

    switch(score){
        case 10 :
        case 9 : cout<<"经典"<<endl; break;
        case 8 :
        case 7 : cout<<"非常好"<<endl; break;
        case 6 :
        case 5 : cout<<"一般" <<endl; break;
        default:  cout<< "烂片" <<endl; break;
    }
    return 0;
}

// 笔记
// 1. switch语句中表达式只能是整型 或者 字符型
// 2. case里面如果没有break，程序会一直向下执行
// 3. 与if语句比，对于多条件判断时，switch的结构清晰，缺点就是switch不能判断区间