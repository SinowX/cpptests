#include<iostream>

class A
{
	private:
		int a;
		static double b;
		class X
		{
			private:
				int a;
				static double b;
			public:
				int c;
				static double d;
		};
	public:
		int c;
		static double d;
		class Y
		{
			private:
				int a;
				static double b;
				void asd()
				{
				}
			public:
				int c;
				static double d;
				void asde()
				{
				}
		};
};


int main()
{
	std::cout<<sizeof(A)<<std::endl;
	A asd;
}
