#include<iostream>
using namespace std;

int main(){
    //方式1 两行三列
    // int arr[2][3];
	// arr[0][0] = 1;
	// arr[0][1] = 2;
	// arr[0][2] = 3;

	// arr[1][0] = 4;
	// arr[1][1] = 5;
	// arr[1][2] = 6;


    // 方式二
    // int arr[2][3] = {
    //     {1, 2, 3},
    //     {2, 3, 4}
    // };
    
    // 方式三
    // int arr[2][3] = { 2, 3, 4, 5, 6, 7 };

    // 方式四
    int arr[][3] = { 2, 3, 4, 5, 6, 7 };

    for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

    return 0;
}