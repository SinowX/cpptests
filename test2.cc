#include <stdlib.h>
#include <cstdio>

class A
{
	public:
	A()
	{
		printf("Class A Construction\n");
	}
	virtual void asd() = 0;
	~A()
	{
		printf("Class A Deconstruction\n");
	}
};
class B
{
	public:
	B()
	{
		printf("Class B Construction\n");
	}
	~B()
	{
		printf("Class B Deconstruction\n");
	}
};

class C:public B
{
	public:
	C()
	{
		printf("Class C Construction\n");
	}
	~C()
	{
		printf("Class C Deconstruction\n");
	}
	private:
	A as;
};


int main()
{
	C * sad = new C;
	delete sad;

}
