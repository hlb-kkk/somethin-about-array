#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	int arr[4] = { 1,4,6 };//未定义元素即为0；
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "数组占用的内存空间是" << sizeof(arr) << endl;
	cout << "第一个内存地址是" << (int)arr << endl;

	//找五个元素中的最大值
	int max_w[5] = { 345,357,168,535,891 };
	int max = 0;

	for (int j = 0; j < 5; j++)
	{
		if (max_w[j] > max)
		{
			max = max_w[j];
			
		}
		
	}
	cout << max << endl;
	system("pause");
	return 0;
}