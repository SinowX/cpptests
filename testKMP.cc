#include <iostream>
#include <vector>
#include <string>



std::vector<std::size_t> BuildNext(std::string const & pattern)
{
	std::vector<std::size_t> res(pattern.size(), 0);
	std::size_t i=1,j=0;
	
	while(i!=pattern.size())
	{
		if(pattern[i] == pattern[j]) {
			j++;
			res[i] = j;
			i++;
		} else {
			if(j!=0) j=res[j];
			else i++;
		}
	}
	return res;
}

int KMP(std::string const &text, std::string const &pattern)
{
	if(text.size()<pattern.size()) return -1;
	if(text.size()==0 || pattern.size()==0) return 0;
	auto&& next = BuildNext(pattern);

	std::size_t i=0, j=0;

	while(j!=pattern.size())
	{
		if(text[i]==pattern[j])
		{
			i++;
			j++;
		} else {

			if(j!=0)
				j=next[j];
			else
				i++;

			if(pattern.size() - j > text.size() - i)
				break;
		}
	}
	if(j==pattern.size()) return i-j;
	else return -1;
}


int main()
{
	std::string text {"12123112313212"};
	std::string pattern {"12313"};
	std::cout<<KMP(text, pattern)<<std::endl;

	text = "kkkabcdefgabcdefgabcdefkkkkkkkkkkkkkkkkkkkkkkk";
	pattern = "abcdefgabcdefgabcdef";
	for(auto it : BuildNext(pattern)) {
		std::cout<<it<<" ";
	}
	std::cout<<std::endl;
	std::cout<<KMP(text, pattern)<<std::endl;

	text = "ABABABCABABABCABABABC";
	pattern = "ABABAC";
	for(auto it : BuildNext(pattern)) {
		std::cout<<it<<" ";
	}
	std::cout<<std::endl;
	std::cout<<KMP(text, pattern)<<std::endl;

	text = "";
	pattern = "";
	for(auto it : BuildNext(pattern)) {
		std::cout<<it<<" ";
	}
	std::cout<<std::endl;
	std::cout<<KMP(text, pattern)<<std::endl;

}
