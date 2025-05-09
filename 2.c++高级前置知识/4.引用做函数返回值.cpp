#include<iostream>
using namespace std;

//返回局部变量引用
int& test01() {
	int a = 10; //局部变量
	return a;
}
//返回静态变量引用
int& test02() {
	static int a = 20;
	return a;
}

/*
笔记：
作用：引用是可以作为函数的返回值存在的
注意：不要返回局部变量引用
用法：函数调用作为左值
*/