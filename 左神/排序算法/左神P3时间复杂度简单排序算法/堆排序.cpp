//#include <iostream>
//using namespace std;
//void heapInsert(int a[], int index);
//void heapify(int a[], int index, int heapsize);
//
//void heapSort(int a[],int length)
//{
//	if ( length == 0 || length == 1)
//	{
//		return;
//	}
//	for (int i = 0; i < length; i++)
//	{
//		heapInsert(a, i);
//	}
//	swap(a[0], a[--length]);
//	while (length > 0)
//	{
//		heapify(a, 0, length);
//		swap(a[0], a[--length]);
//	}
//}
//
//void heapInsert(int a[], int index)
//{
//	while (a[index] > a[(index - 1) / 2])
//	{
//		swap(a[index], a[(index - 1) / 2]);
//		index = (index - 1) / 2;
//	}
//}
//
//void heapify(int a[], int index, int heapsize)
//{
//	int left = index * 2 + 1;
//	while (left < heapsize)  // 看是否有左孩子
//	{
//		int max = left + 1 < heapsize && a[left + 1] > a[left] ? left + 1 : left;
//		max = a[max] > a[index] ? max : index;
//		if (max == index)
//		{
//			break;
//		}
//		swap(a[max], a[index]);
//		index = max;
//		left = index * 2 + 1;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 8,9,6,3,7,1,0,5,8,2 };
//	heapSort(arr, sizeof(arr) / sizeof(arr[0]));
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}