#include <iostream>

class Base
{
	public:
		inline virtual void who()
		{
			std::cout<<"I am Base\n";
		}
		virtual ~Base()
		{
			std::cout<<"End Base\n";
		}
};

class Derived : public Base
{
	public:
		inline void who() final
		{
			std::cout<<"I am Derived\n";
		}
};


int main()
{
	Base asd{};
	asd.who();

	Derived d{};
	d.who();

	Base *p = new Derived();
	p->who();
}
