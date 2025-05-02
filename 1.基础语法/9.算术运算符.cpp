#include<iostream>
using namespace std;

int main(){
	// int a1 = 10;
	// int b1 = 3;

	// cout << a1 + b1 << endl;
	// cout << a1 - b1 << endl;
	// cout << a1 * b1 << endl;
	// cout << a1 / b1 << endl;  //两个整数相除结果依然是整数

    // float a2 = 10;
	// float b2 = 20;
	// cout << a2 / b2 << endl; 


    // 2. 取模
    // int a1 = 10;
	// int b1 = 3;

	// cout << 10 % 3 << endl;

	// int a2 = 10;
	// int b2 = 20;

	// cout << a2 % b2 << endl;
    // cout << 15 % 20 << endl;
    // cout << 8 % 3 << endl;

    // double d1 = 3.15;
    // double d2 = 1.12;
    // cout<< d1 % d2 << endl;
    // 两个小数不可以取余

    // 3.递增
    //后置递增
	int a = 10;
	a++; //等价于a = a + 1
	cout << a << endl; // 11


	//前置递增
	int b = 10;
	++b;
	cout << b << endl; // 11

    //区别
	//前置递增先对变量进行++，再计算表达式
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;

    //后置递增先计算表达式，后对变量进行++
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << b3 << endl;//100
    cout << a3 << endl;//11
    return 0 ;
}

// 笔记
// 在递增中 总结：前置递增先对变量进行++，再计算表达式，后置递增相反