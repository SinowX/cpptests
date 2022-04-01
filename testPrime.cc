#include <iostream>
#include <vector>


std::vector<int> Loop(int n) {
	if(n<2) return {};

	std::vector<int> res{};
	res.push_back(2);

	for(int i=3; i<=n; i+=2) {
		int j{};
		for(j=3; j<=n; j+=2) {
			if(i%j==0 || j*j>i)
				break;
		}
		if(j*j>i)
			res.push_back(i);
	}
	return res;
}

std::vector<int> Eratosthenes(int n){

}


int main() {
	int n{100000};
	auto&& res = Loop(n);
	for(auto it:res) {
		std::cout<<it<<" ";
	}
	std::cout<<std::endl;
}


