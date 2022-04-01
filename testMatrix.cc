#include <vector>
#include <memory>
#include <iostream>


int main()
{
	using MTX = std::vector<std::vector<int>>;

	int rank = 10;
	auto tmp = std::make_unique<MTX>(rank, std::vector<int>(rank, 10));

	/* std::cout<<tmp->size()<<std::endl; */
	/* std::cout<<tmp->back().size()<<std::endl; */


	for(auto vec : *tmp){
		for(auto it: vec){
			std::cout<<it<<" ";
		}
		std::cout<<std::endl;
	}
}
