//#include <iostream>
//using namespace std;
//
//int myfind(int a[], int length, int target)
//{
//	int L = 0;
//	int R = length - 1;
//	while (L <= R)
//	{
//		int mid = L + ((R - L) >> 1);
//		if (target < a[mid])
//		{
//			R = mid - 1;
//		}
//		else if (target == a[mid])
//		{
//			return mid;
//		}
//		else if (target > a[mid])
//		{
//			L = mid + 1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	int result = myfind(arr, length, 6);
//	cout << result << endl;
//	system("pause");
//	return 0;
//}