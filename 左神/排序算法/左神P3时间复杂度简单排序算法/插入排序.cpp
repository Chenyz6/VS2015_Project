//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a[10] = { 8,7,6,9,5,4,2,1,3,0 };
//
//	int length = sizeof(a) / sizeof(a[0]);
//
//	for (int i = 1; i < length; i++)  //×öµ½ 1~i ÓÐÐò
//	{
//		for (int j = i - 1; a[j] > a[j + 1] && j >= 0; j--)
//		{
//			int temp = 0;
//			temp = a[j];
//			a[j] = a[j + 1];
//			a[j + 1] = temp;
//		}
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << a[i] << " ";
//	}
//	system("pause");
//}
//
