#include<iostream>
using namespace std;

void func()
{
	cout << "func 的调用！" << endl;
}
void func(int a)
{
	cout << "func (int a) 的调用！" << endl;
}
void func(double a)
{
	cout << "func (double a)的调用！" << endl;
}
void func(int a ,double b)
{
	cout << "func (int a ,double b) 的调用！" << endl;
}
void func(double a ,int b)
{
	cout << "func (double a ,int b)的调用！" << endl;
}

int main(){
    func();
    func(10);
    return 0;
}


/*
函数重载满足条件：
- 同一个作用域下
- 函数名称相同
- 函数参数类型不同， 或者个数不同， 顺序不同

注意：函数的返回值不能作为函数重载的条件
*/