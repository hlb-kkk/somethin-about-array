#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	int arr[4] = { 1,4,6 };//δ����Ԫ�ؼ�Ϊ0��
	for (int i = 0; i < 4; i++)
	{
		cout << arr[i] << endl;
	}

	cout << "����ռ�õ��ڴ�ռ���" << sizeof(arr) << endl;
	cout << "��һ���ڴ��ַ��" << (int)arr << endl;

	//�����Ԫ���е����ֵ
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