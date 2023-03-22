//#include <iostream>
//using namespace std;
//int * mypartition(int a[], int L, int R);
//
//
//void quickSort(int a[], int L, int R)
//{
//	if (L < R)
//	{
//		swap(a[L + rand() % (R - L + 1)], a[R]);
//		int * p = mypartition(a, L, R);
//		quickSort(a, L, p[0] - 1);
//		quickSort(a, p[1] + 1, R);
//	}
//}
//
//int * mypartition(int a[], int L, int R)
//{
//	int p1 = L - 1;
//	int p2 = R;
//	while (L < p2)
//	{
//		if (a[L] < a[R])
//		{
//			swap(a[++p1], a[L++]);
//		}
//		else if (a[L] > a[R])
//		{
//			swap(a[--p2], a[L]);
//		}
//		else
//		{
//			L++;
//		}
//	}
//	swap(a[p2], a[R]);
//	return new int[2]{p1+1,p2};
//}
//
//int main()
//{
//	int arr[10] = { 9,6,3,7,1,0,2,7,9,3 };
//	quickSort(arr, 0, 9);
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//	system("pause");
//	return 0;
//}
//
