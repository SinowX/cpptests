#include <type_traits>
#include <iostream>



int main() {
	std::cout<<std::is_integral<int>::value<<std::endl;
	std::cout<<std::is_integral<char>::value<<std::endl;
	std::cout<<std::is_integral<bool>::value<<std::endl;
}
