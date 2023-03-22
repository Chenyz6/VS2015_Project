#include<iostream>
using namespace std;

int main()
{
	int a[10] = { 8,7,6,9,5,4,2,1,3,0 };
	int length = sizeof(a) / sizeof(a[0]);
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	system("pause");
}