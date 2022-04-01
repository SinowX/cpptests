#include <iostream>


int asdfg(const char* str)
{
	std::cout<<str<<std::endl;
	return 0;
}

int asdfg(const int str)
{
	std::cout<<str<<std::endl;
	return 0;
}

void tmp(const char* filename, const char* funcname, const int line)
{
	std::cout<<filename<<" "<<funcname<<":"<<line<<std::endl;
}


int main()
{
	/* asdfg("asdqwe"); */

/* #define HELLO asdfg( __FILE__) */
/* #define HELLO asdfg( __FUNCTION__) */
#define HELLO tmp(__FILE__, __FUNCTION__, __LINE__)

	HELLO;
	return 0;
}
