//#include <iostream>
//using namespace std;
//void my_merge(int arr[], int l, int m, int r)
//{
//	int * a = new int[r - l + 1];
//	int p1 = l;
//	int p2 = m + 1;
//	int i = 0;
//	int k;
//	while (p1 <= m && p2 <= r)
//	{
//		arr[p1] < arr[p2] ? a[i++] = arr[p1++] : a[i++] = arr[p2++];
//		a[i++] = arr[p1] < arr[p2] ? arr[p1++] : arr[p2++];
//		if (arr[p1] < arr[p2])
//		{
//			a[i++] = arr[p1++];
//		}
//		else
//		{
//			a[i++] = arr[p2++];
//		}
//	}
//	while (p1 <= m)
//	{
//		a[i++] = arr[p1++];
//	}
//	while (p2 <= r)
//	{
//		a[i++] = arr[p2++];
//	}
//	for (i = l, k = 0; i <= r; i++, k++)
//	{
//		cout << sizeof(a) / sizeof(a[0]) << endl;
//		arr[i] = a[k];
//	}
//	for (i = 0; (l + i) <= r; i++)
//	{
//		arr[l + i] = a[i];
//	}
//	for (i = 0; i < (r - l + 1); i++)
//	{
//		cout << r - l + 1 << endl;
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
//	my_merge(arr, l, mid, r);
//}
//
//
//
//int main() {
//	int arr1[10] = { 1,9,8,6,5,3,2,4,7,0 };
//	cout << "ÅÅĞòÇ°" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//	cout << endl;
//	process(arr1, 0, 9);
//	cout << "ÅÅĞòºó" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr1[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}