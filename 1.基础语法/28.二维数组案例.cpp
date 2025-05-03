/*
需求：
案例描述：有三名同学（张三，李四，王五），在一次考试中的成绩分别如下表，**请分别输出三名同学的总成绩**

|      | 语文 | 数学 | 英语 |
| ---- | ---- | ---- | ---- |
| 张三 | 100  | 100  | 100  |
| 李四 | 90   | 50   | 100  |
| 王五 | 60   | 70   | 80   |
*/

#include<iostream>
using namespace std;

int main(){
    string names[] = { "张三", "李四", "王五" };

    int score[3][3] = {
        {100, 100, 100},
        {90, 50, 100},
        {60, 70, 80}
    };
    for(int i = 0; i < 3; i++){
        int nums  = 0;
        for(int j = 0; j < 3; j++){
             nums += score[i][j];
        }
        cout<<names[i] << "成绩为：" <<nums <<endl;
    }

    return 0;
}