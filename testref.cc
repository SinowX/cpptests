#include <iostream>

int main()
{
	auto f=12;
	int&& x=12;
	 int ci = 0;
	int& cj =ci;
	
	decltype(ci) const &  asd=f; // aka below
	/* const decltype(ci)&  asd=f; */
	

	/* asd = 123; */
	/* asd=65; */

}
