#include <dirent.h>
#include <iostream>
#include <stdexcept>
#include <cstring>
#include <errno.h>


int main()
{
	auto path = "/home/sinow";
	auto handle = opendir(path);
	if(handle==nullptr)
		throw std::runtime_error(strerror(errno));
	
	struct dirent * entry {nullptr};

	while((entry = readdir(handle))!=nullptr)
	{
		/* std::cout<<"File i-node number: "<<entry->d_ino */
			/* <<"\n    File Name: "<<entry->d_name<<std::endl; */
		/* std::cout<<entry->d_name<<std::endl; */
		std::cout<<entry->d_ino<<std::endl;
	}
}
