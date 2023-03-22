#include "MyArray.hpp"

void printArray(MyArray<int>& arr)
{
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
}

void test()
{
	MyArray<int> arr1(5);

	//MyArray<int> arr2(arr1);

	//MyArray<int> arr3(100);
	//arr3 = arr1;
	//利用尾插法向数组插入数据
	for (int i = 0; i < 5; i++)
	{
		arr1.push_back(i);
	}
	printArray(arr1);

}

int main()
{
	test();
	system("pause");
	return 0;
}