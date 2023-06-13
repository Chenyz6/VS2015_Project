#include <iostream>
#include <windows.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int find(int arr[],int num)
{
	int l = 0, r = 9, mid = 0;
	while (l <= r)
	{
		mid = l + ((r - l) >> 1);
		if (arr[mid] > num)
		{
			r = mid - 1;

		}
		else if (arr[mid] < num)
		{
			l = mid + 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[10] = {0,1,2,3,4,5,6,7,8,9};
	cout << find(arr,0) << endl;
	cout << find(arr,1) << endl;
	cout << find(arr,5) << endl;
	cout << find(arr,9) << endl;
	cout << find(arr,10) << endl;
	system("pause");
	return 0;
}