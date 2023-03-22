//#include<iostream>
//using namespace std;
//
//交换的通用模板
//template<typename T>
//void my_swap(T &a, T &b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//选择排序的通用模板
//template<class T>
//void my_sort(T arr[], int length)
//{
//	for (int i = 0; i < length - 1; i++)
//	{
//		int max = i;
//		for (int j = i + 1; j < length; j++)
//		{
//			if (arr[j] > arr[max])
//			{
//				max = j;
//			}
//		}
//		my_swap(arr[max], arr[i]);
//	}
//}
//
//template<class T>
//void my_print(T arr[], int length)
//{
//	for (int i = 0; i < length; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test()
//{
//	int a[] = { 2,0,1,6,5 };
//	int num = sizeof(a) / sizeof(a[0]);
//	my_sort(a, num);
//	my_print(a, num);
//	char b[] = { "jifajoedfjbobv" };    // A-65   a-97
//	int num1 = sizeof(b) / sizeof(b[0]);
//	my_sort(b, num1);
//	my_print(b, num1);
//}
//
//int main()
//{
//	test();
//	system("pause");
//	return 0;
//}