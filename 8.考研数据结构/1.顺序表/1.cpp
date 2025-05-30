/*题目：
从顺序表中删除具有最小值的元素（假设唯一）并由函数返回被删元素的值。空出的位置由最后一个元素填补，若顺序表为空，则显示出错信息并退出运行
*/

#include <iostream>
#include <cstdlib> //用于exit函数
using namespace std;
// 定义顺序表结构
// typedef是C++用来给类型起别名的关键字
// typedef struct {
//     // 成员变量...
// } SqList;  // 给这个匿名结构体类型起别名为 SqList
typedef struct
{
    int *elements;
    int length;
} SqList;
/*
其中 int * elements 存放的是动态数组的首地址
*/

int deleteMin(SqList &list)
{
    if (list.length == 0)
    {
        cerr << "Error:顺序表为空，无法删元素! " << endl;
        exit(EXIT_FAILURE);
    }
    // 寻小最小值的位置
    int minIndex = 0;
    for (int i = 1; i < list.length; i++)
    {
        if (list.elements[i] < list.elements[minIndex])
        {
            minIndex = i;
        }
    }
    // 保存被删除的最小值
    int deleteValue = list.elements[minIndex];

    // 用最后一个元素填补空位
    list.elements[minIndex] = list.elements[list.length - 1];
    list.length--;

    return deleteValue;
}

// 示例用法
int main()
{
    SqList list;
    list.elements = new int[5];
    list.length = 5;

    list.elements[0] = 20;
    list.elements[1] = 3;
    list.elements[2] = 2;
    list.elements[3] = 3;
    list.elements[4] = 9;
    
    int min = deleteMin(list);
    cout << "删除的最小值" <<min << endl;
   cout << "删除后顺序表中的元素为：";
    for (int i = 0; i < list.length; ++i) {
        cout << list.elements[i] << " ";
    }
    cout << endl;
    delete[] list.elements;
    return 0;
}