#include <vector>
#include <iostream>


int main() {
	std::vector<bool> hello(12,true);
	for(auto it:hello) {
		std::cout<<it<<std::endl;
	}
}
