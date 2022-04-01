#include <iostream>

using namespace std;

class Tester
{
	public:
		Tester(int a)
		{
			cout<<"Default"<<endl;
		}
};


int main()
{
	Tester *te = new Tester;
}
