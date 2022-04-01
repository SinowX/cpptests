#include <string>
#include <iostream>
#include <cassert>
#include <vector>

int main()
{
	std::vector<int> asd({12,4,12,3,12,43,45,56,23,12});
	/* std::string asd("uwiqndjnesdfgergg"); */
	auto diff = asd.end()-asd.begin();
	std::cout<<diff<<std::endl;
	std::cout<<asd.size()<<std::endl;
	
	/* assert(asd.size()==asd.end()-asd.begin()); */
}
