#pragma once
#include <iostream>
using namespace std;


template<typename T>
class MyArray
{
public:
	MyArray(int Capacity)
	{
		//cout << "调用了构造函数" << endl;
		this->pAddress = new T[m_Capacity];
		this->m_Capacity = Capacity;
		this->m_size = 0;
	}


	~MyArray()
	{
		//cout << "调用了析构函数" << endl;
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
		//cout << "调用了拷贝函数" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_size = arr.m_size;
		//深拷贝
		this->pAddress = new T[arr.m_Capacity];
		for (int i = 0; i < arr.m_size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}

	}

	//尾插法
	void push_back(const T & val)
	{
		if (this->m_size == this->m_Capacity)  //判断容量和内容大小是否相等
		{
			return;
		}
		this->pAddress[this->m_size] = val;  
		this->m_size++;
	}

	//尾删法
	void pop_back()
	{
		//逻辑上访问不到要删除的元素就可以
		if (this->m_size == 0)
		{
			return;
		}
		this->m_size--;
	}


	//通过下标方式访问数组元素
	T& operator[] (int index)
	{
		return this->pAddress[index];
	}


	//返回数组容量
	int getCapacity()
	{
		return this->m_Capacity;
	}


	//返回数组大小
	int getSize()
	{
		return this->m_size;
	}

	MyArray & operator= (const MyArray & arr)
	{
		//cout << "调用了operate=函数" << endl;
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
	T * pAddress; //指向一个堆的空间
	int m_Capacity; // 数组的容量
	int m_size; // 数组现在存在的元素个数 大小
};