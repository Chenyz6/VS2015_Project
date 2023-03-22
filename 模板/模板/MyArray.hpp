#pragma once
#include <iostream>
using namespace std;


template<typename T>
class MyArray
{
public:
	MyArray(int Capacity)
	{
		//cout << "�����˹��캯��" << endl;
		this->pAddress = new T[m_Capacity];
		this->m_Capacity = Capacity;
		this->m_size = 0;
	}


	~MyArray()
	{
		//cout << "��������������" << endl;
		if (pAddress != NULL)
		{
			delete [] pAddress;
			pAddress = NULL;
			m_Capacity = 0;
			m_size = 0;
		}
	}


	MyArray(const MyArray &arr)
	{
		//cout << "�����˿�������" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		//���
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

	}

	//β�巨
	void push_back(const T & val)
	{
		if (this->m_size == this->m_Capacity)  //�ж����������ݴ�С�Ƿ����
		{
			return;
		}
		this->pAddress[this->m_size] = val;  
		this->m_size++;
	}

	//βɾ��
	void pop_back()
	{
		//�߼��Ϸ��ʲ���Ҫɾ����Ԫ�ؾͿ���
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}


	//ͨ���±귽ʽ��������Ԫ��
	T& operator[] (int index)
	{
		return this->pAddress[index];
	}


	//������������
	int getCapacity()
	{
		return this->m_Capacity;
	}


	//���������С
	int getSize()
	{
		return this->m_size;
	}

	MyArray & operator= (const MyArray & arr)
	{
		//cout << "������operate=����" << endl;
		if (this->pAddress != NULL)
		{
			delete[] pAddress;
			this->pAddress = NULL;
			this->m_Capacity = 0;
			this->m_size = 0;
		}
		this->pAddress = new T(arr.m_Capacity);
		for (int i = 0; i < arr.m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

private:
	T * pAddress; //ָ��һ���ѵĿռ�
	int m_Capacity; // ���������
	int m_size; // �������ڴ��ڵ�Ԫ�ظ��� ��С
};