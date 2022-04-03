#include <chrono>
#include <iostream>
#include <unistd.h>

using namespace std::chrono_literals;

int main() 
{
	auto start = std::chrono::high_resolution_clock::now();
	sleep(1);
	auto end = std::chrono::high_resolution_clock::now();
	
	/* auto diff = end - start; */
	std::chrono::duration<double> diff = end - start;
	
	std::cout<<diff.count()<<"s"<<std::endl;

}
