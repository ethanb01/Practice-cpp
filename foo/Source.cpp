#include <iostream>
using namespace std;


class Base
{
public:
	void function1() 
	{
		cout << "Base Function1" << endl;
	}
	void function2() 
	{
		cout << "Base Function2" << endl;
	}
};
class D1 : public Base
{
public:
	virtual void function1() 
	{
		cout << "D1 Function1" << endl;
	}
};
class D2 : public Base 
{
public:
	void function2() 
	{
		cout << "D2 Function2" << endl;
	}
};


int main()
{
	D1 d1;
	D2 d2;
	Base &b1 = d1;
	Base &b2 = d2;
	b1.function1();
}