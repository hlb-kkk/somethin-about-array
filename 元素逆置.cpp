#include <iostream>
#include <ctime>
#include <string>
#include <math.h>

using namespace std;



void cag(int &a, int &b)
{
	int t = 0;
	t = a;
	a = b;
	b = t;
	//访问数组中的具体的数，需要加取址符 &  

	

}


int main()
{
	int arr2[7] = { 0,1,2,3,4,5,6 };
	int arr3[7] = {};


	for (int i = 0; i < 7; i++)
	{
		cag(arr2[i], arr3[6 - i]);//这边是调用函数的方式，也可以如下

		//arr3[6 - i] = arr2[i];
		
	}
	
	
	for (int j = 0; j < 7; j++)
	{
		cout << arr3[j] << endl;

	}


	/*
	int start = 0；//起始元素的下标位置

	int end = sizeof(arr)/sizeof(arr[0])-1; //末尾元素的下标值	
	
	*/

	system("pause");
	return 0;

}


