#include<iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "无参构造函数!" << endl;
		mAge = 0;
	}
	Person(int age) {
		cout << "有参构造函数!" << endl;
		mAge = age;
	}
	Person(const Person& p) {
		cout << "拷贝构造函数!" << endl;
		mAge = p.mAge;
	}
	//析构函数在释放内存之前调用
	~Person() {
		cout << "析构函数!" << endl;
	}
public:
	int mAge;
};
//1. 使用一个已经创建完毕的对象来初始化一个新对象
void test01(){
    Person man(100);//调用有参构造函数
    Person newman(man);//显示法-> 调用拷贝构造函数
    Person newman2 = man;//隐式转换法-> 调用拷贝构造函数
}
// 2.值传递的方式给函数参数传值
void doWork(Person p1){} //值传递参数 → 调用拷贝构造

void test02(){
    Person p;// 调用无参构造
    doWork(p); // 将p传给p1 → 拷贝构造
}

int main(){


    return 0;
}


/*
笔记：
*/