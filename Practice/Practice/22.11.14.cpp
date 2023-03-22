//#include <iostream>
//using namespace std;
//
//void sort(int a[], int l, int m, int r)
//{
//	int *arr = new int[r - l + 1];
//	int p1 = l;
//	int p2 = m + 1;
//	int k = 0;
//	while (p1 <= m && p2 <= r)
//	{
//		if (a[p1] <= a[p2])
//		{
//			arr[k++] = a[p1++];
//		}
//		else
//		{
//			arr[k++] = a[p2++];
//		}
//	}
//	while (p1 <= m)
//	{
//		arr[k++] = a[p1++];
//	}
//	while (p2 <= r)
//	{
//		arr[k++] = a[p2++];
//	}
//
//	for (int i = 0; i < (r - l + 1); i++)
//	{
//		a[l + i] = arr[i];
//	}
//	delete[] arr;
//}
//
//void process(int a[], int l, int r)
//{
//	if (l == r)
//	{
//		return;
//	}
//	int mid = l + ((r - l) >> 1);
//	process(a, l, mid);
//	process(a, mid + 1, r);
//	sort(a, l, mid, r);
//}
//
//
//
//int main()
//{
//	int arr[10] = { 1,9,8,6,5,3,2,4,7,0 };
//	cout << "ÅÅÐòÇ°" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	process(arr, 0, 9);
//	cout << "ÅÅÐòºó" << endl;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}