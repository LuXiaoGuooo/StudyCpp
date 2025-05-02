#include<iostream>
using namespace std;

int main(){
	//赋值运算符

	// =
	int a = 10;
	a = 100;
	cout << "a = " << a << endl;//10

	// +=
	a = 10;
	a += 2; // a = a + 2;
	cout << "a = " << a << endl;//12

	// -=
	a = 10;
	a -= 2; // a = a - 2
	cout << "a = " << a << endl;//8

	// *=
	a = 10;
	a *= 2; // a = a * 2
	cout << "a = " << a << endl;//20

	// /=
	a = 10;
	a /= 2;  // a = a / 2;
	cout << "a = " << a << endl;//5

	// %=
	a = 10;
	a %= 2;  // a = a % 2;
	cout << "a = " << a << endl;//0

    return 0 ;
}