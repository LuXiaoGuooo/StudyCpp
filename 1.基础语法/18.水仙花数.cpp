// **水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身
//例如：1^3 + 5^3+ 3^3 = 153
//请利用do...while语句，求出所有3位数中的水仙花数
#include<iostream>
using namespace std;

int main(){
    int num = 100;
    cout <<" 三位数的鲜花数有："<<endl;

    do{
        int a = num /100 ; // 百位
        int b = (num / 10) % 10; // 十位
        int c = num % 10 ; //个位
    
        int num2 = a * a * a + b * b * b + c * c * c;

        if(num2 == num){
            cout<< num2 <<endl;
        }
        num++;
    }while (num < 1000);
    return 0;
}