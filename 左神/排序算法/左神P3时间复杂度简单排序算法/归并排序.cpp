//#include <iostream>
//using namespace std;
//
//void merge(int arr[], int l, int mid, int r)
//{
//	int * a = new int[r - l + 1];
//	int p1 = l;
//	int p2 = mid + 1;
//	int i = 0;
//	while (p1 <= mid && p2 <= r)
//	{
//		if (arr[p1] <= arr[p2])
//		{
//			a[i++] = arr[p1++];
//		}
//		else
//		{
//			a[i++] = arr[p2++];
//		}
//	}
//	while (p1 <= mid)
//	{
//		a[i++] = arr[p1++];
//	}
//	while (p2 <= r)
//	{
//		a[i++] = arr[p2++];
//	}
//
//	for (i = 0; i < (r - l + 1); i++)
//	{
//		arr[l + i] = a[i];
//	}
//	delete[] a;
//}
//
//void process(int arr[], int l, int r)
//{
//	if (l == r)
//	{
//		return;
//	}
//	int mid = l + ((r - l) >> 1);
//	process(arr, l, mid);
//	process(arr, mid + 1, r);
//	merge(arr, l, mid, r);
//}
//
//
//int main()
//{
//	int arr[10] = { 1,9,8,6,5,3,2,4,7,0 };
//	cout << "ÅÅĞòÇ°" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	process(arr, 0, 9);
//	cout << "ÅÅĞòºó" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}