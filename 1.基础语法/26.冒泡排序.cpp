// 需求
//1. 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
//2. 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值。
//3. 重复以上的步骤，每次比较次数-1，直到不需要比较

#include<iostream>
using namespace std;

int main(){
    int arr[] = { 2, 3, 23, 44, 70, 23, 66, 80 };
    for(int i = 0 ; i < 8 ; i++){
        for(int j = 0 ; j < 7 ; j++){
            if(arr[j +1 ] > arr [j]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	for (int i = 0; i < 8; i++)
	{
		cout << arr[i] << endl;
	}
    return 0 ;
}