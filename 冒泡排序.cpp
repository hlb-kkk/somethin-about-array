#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
	int arr4[] = { 3,5,8,2,6,9,0,7 };
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j <7-i; j++)
		{
			if (arr4[j] < arr4[j + 1])
			{
				int temp = arr4[j];
				arr4[j] = arr4[j + 1];
				arr4[j + 1] = temp;

			}

		}
	}


	for (int m = 0; m < 8; m++)
	{
		cout << arr4[m] << endl;
	}






	system("pause");
	return 0;
}
