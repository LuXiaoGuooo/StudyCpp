#include<iostream>
using namespace std;

int main() {
    // cout<< sizeof(short) <<endl;
    // cout<< sizeof(int) <<endl;
    // cout<< sizeof(long) <<endl;
    // cout<< "long long多少： " << sizeof(long long)<<endl;

    // 字符类型
    // char ch = 'a';
    // cout<< (int)ch << endl;

    // 转义字符
    cout << "\\" << endl;
    // cout << "\" << endl; // 会报错     
    // 因为在c++字符串中，反斜杠是转义字符，所以会报错
    // 场景一：路径的反斜杠未转义
    // cout << "C:\Program Files\Project" << endl; 
    // 正确写法如下：
    cout << "C:\\Program Files\\Project" << endl; 
    return 0;
}

/*

一.基本数据类型
1. 整形
short 2字节 -32768 ～ 32767 
int  4字节 -2.1亿 ~ 2.1亿 
long 4或8字节 更大范围
long long 8字节 -9×10¹⁸ ~ 9×10¹⁸ 
2. 浮点型
float 4字节
double 8字节
3. 字符型
chart 1字节 存ASCII字符
wchar_t 2字节或8字节
- 字符变量用于显示单个字符
*1. 在显示字符型变量时，用单引号讲字符括起来，不要用双音好
*2. 单引号内只能有一个字符，不可以是字符串
*3. C和C++中字符型变量只占用1个字节
*4. 字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放入到存储单元

4. 布尔类型
bool 1字节

5. 字符串型

*/