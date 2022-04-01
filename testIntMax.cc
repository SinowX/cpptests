#include <iostream>


int main()
{
	uint32_t ui = static_cast<uint32_t>(INT32_MAX);
	std::cout<<ui<<std::endl;
	std::cout<<++ui<<std::endl;
	std::cout<<++ui<<std::endl;
	std::cout<<++ui<<std::endl;
}
