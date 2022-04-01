#include <string>
#include <algorithm>
#include <iostream>
int main()
{
	std::string asd="aswhquwiehdnkasndkuqgweudasvjhdbjas";
	/* std::for_each(asd.begin(),asd.end(), [](auto it){ */
	/* 			std::cout<<it<<std::endl; */
	/* 		}); */
	for(auto it = asd.begin();it!=asd.end();it++)
	{
		std::cout<<*it<<std::endl;
	}
}
