#include <iostream>
#include <bitset>
using std::cout, std::endl;
int main()
{
	/* std::cout<< b4 <<std::endl; */
	/* std::bitset<20> tmp{"asd"}; */
	/* std::cout<<tmp; */
	std::bitset<8> tmp{0};
	cout<<tmp<<endl;

	tmp=54;
	cout<<tmp<<endl;
	cout<<tmp[0]<<endl;
}
