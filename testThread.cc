#include <thread>
#include <iostream>
#include <chrono>
#include <unistd.h>

void Looping()
{
	while(true) {
		std::cout<<"From Looping"<<std::endl;
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
}


void GenThread()
{
	std::thread tmp(Looping);
	tmp.detach();
	/* tmp.join(); */
}


int main()
{
	GenThread();
	std::cout<<"GenThread() returned"<<std::endl;
	pause();
}
