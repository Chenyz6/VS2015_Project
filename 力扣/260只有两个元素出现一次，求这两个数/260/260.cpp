//���۵�260��
//����һ����������?nums������ǡ��������Ԫ��ֻ����һ�Σ���������Ԫ�ؾ��������Ρ�
//�ҳ�ֻ����һ�ε�������Ԫ�ء�����԰� ����˳�� ���ش𰸡�
//�������Ʋ�ʵ������ʱ�临�Ӷȵ��㷨�ҽ�ʹ�ó�������ռ�����������⡣

#include<iostream>
using namespace std;

//�����һ�ε�����Ԫ�طֱ�Ϊa,b
void selection(int arr[], int length)
{
	int andorsum = 0;
	for (int i = 0; i < length; i++)
	{
		andorsum = andorsum ^ arr[i];   //sum = a ^ b
	}
 	int rightone = andorsum & (~andorsum + 1);   //������ұߵ�һ��1
	int eor = 0;
	for (int j = 0; j < length ; j++)
	{
		if (arr[j] & rightone == 1)
		{
			eor ^= arr[j];   //���a��b����һ����1����
		}
	}
	cout << "����һ����Ϊ" << eor << endl;
	cout << "��һ����Ϊ" << (eor ^ andorsum) << endl;
}
int main()
{
	int a[] = { 1,3,5,8,9,5,3,1,8,8,9,9};   // ����a = 8 , b = 9
	cout << "���鳤��Ϊ" << sizeof(a) / sizeof(a[0]) << endl;
	selection(a, sizeof(a) / sizeof(a[0]));
	system("pause");
	return 0;
}