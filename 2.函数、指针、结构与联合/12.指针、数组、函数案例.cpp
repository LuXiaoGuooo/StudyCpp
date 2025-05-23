// **案例描述：**封装一个函数，利用冒泡排序，实现对整型数组的升序排序
//例如数组：int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
#include<iostream>
using namespace std;

void bubbleSort(int * arr, int len){
    for(int i = 0 ; i < len - 1; i ++){
        for(int j = 0 ; j < len - 1 - i; j ++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// 打印数组函数
void printArray(int arr[], int len){
    for(int i = 0 ; i < len ; i++){
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main(){
    int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
    int len = sizeof(arr) / sizeof(int);

    bubbleSort(arr, len);
    
    printArray(arr, len);

    return 0;
}