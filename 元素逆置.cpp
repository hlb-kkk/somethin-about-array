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
	//���������еľ����������Ҫ��ȡַ�� &  

	

}


int main()
{
	int arr2[7] = { 0,1,2,3,4,5,6 };
	int arr3[7] = {};


	for (int i = 0; i < 7; i++)
	{
		cag(arr2[i], arr3[6 - i]);//����ǵ��ú����ķ�ʽ��Ҳ��������

		//arr3[6 - i] = arr2[i];
		
	}
	
	
	for (int j = 0; j < 7; j++)
	{
		cout << arr3[j] << endl;

	}


	/*
	int start = 0��//��ʼԪ�ص��±�λ��

	int end = sizeof(arr)/sizeof(arr[0])-1; //ĩβԪ�ص��±�ֵ	
	
	*/

	system("pause");
	return 0;

}


