//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[10] = { 8,7,6,9,5,4,2,1,3,0 };
//
//	int length = sizeof(a) / sizeof(a[0]);
//
//	for (int i = 0; i < length - 1; i++) //һ������n-1��
//	{
//		int min = i;
//		for (int j = i + 1; j < length; j++)  //��i+1  - length-1�ҵ���С�� 
//		{
//			if (a[min] > a[j])
//			{
//				min = j;
//			}
//
//		}
//		int temp = 0;
//		temp = a[i];
//		a[i] = a[min];
//		a[min] = temp;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	system("pause");
//}
//
