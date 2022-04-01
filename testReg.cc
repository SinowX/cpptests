#include <iostream>
#include <regex>



int main()
{
	std::regex asd("^(25[0-5]|2[0-4]\\d|[0-1]?\\d?\\d)(\\.(25[0-5]|2[0-4]\\d|[0-1]?\\d?\\d)){3}$");
	std::string str{};

	while(std::cin>>str)
	{
		if(std::regex_match(str, asd))
		{
			std::cout<<"Match"<<std::endl;
		} else {
			std::cout<<"Not Match"<<std::endl;
		}
	}
}
