#include <iostream>
using namespace std;

class Person
{
public:
	Person(int age)
	{
		m_age = new int(age);
	}
	int * m_age;

	Person & operator= (Person & person)
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age = NULL;
		}
		m_age = new int(*person.m_age);
		return person;
	}

	~Person()
	{
		if (m_age != NULL)
		{
			delete m_age;
			m_age == NULL;
		}
	}
};

void test()
{
	Person a(10);
	Person b(20);
	Person c(30);
	c = a = b;
	cout << "a " << *a.m_age << endl;
	cout << "b " << *b.m_age << endl;
	cout << "c " << *c.m_age << endl;
}

int main()
{
	test();
	system("pause");
}