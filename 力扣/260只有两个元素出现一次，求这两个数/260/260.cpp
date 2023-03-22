//力扣第260题
//给你一个整数数组?nums，其中恰好有两个元素只出现一次，其余所有元素均出现两次。
//找出只出现一次的那两个元素。你可以按 任意顺序 返回答案。
//你必须设计并实现线性时间复杂度的算法且仅使用常量额外空间来解决此问题。

#include<iostream>
using namespace std;

//设出现一次的两个元素分别为a,b
void selection(int arr[], int length)
{
	int andorsum = 0;
	for (int i = 0; i < length; i++)
	{
		andorsum = andorsum ^ arr[i];   //sum = a ^ b
	}
 	int rightone = andorsum & (~andorsum + 1);   //求出最右边的一个1
	int eor = 0;
	for (int j = 0; j < length ; j++)
	{
		if (arr[j] & rightone == 1)
		{
			eor ^= arr[j];   //求出a，b其中一个有1的数
		}
	}
	cout << "其中一个数为" << eor << endl;
	cout << "另一个数为" << (eor ^ andorsum) << endl;
}
int main()
{
	int a[] = { 1,3,5,8,9,5,3,1,8,8,9,9};   // 假设a = 8 , b = 9
	cout << "数组长度为" << sizeof(a) / sizeof(a[0]) << endl;
	selection(a, sizeof(a) / sizeof(a[0]));
	system("pause");
	return 0;
}