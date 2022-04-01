#include<map>
#include<string>
#include<algorithm>
#include<iostream>
#include<vector>

int main()
{
	std::map<int, std::string> the_map;
	the_map.insert({12,"awiuehqiuw"});
	the_map.insert({45,"awiuehqiuw"});
	the_map.insert({675,"awiuehqiuw"});
	the_map.insert({43,"awiuehqiuw"});
	the_map.insert({76,"awiuehqiuw"});

	/* std::for_each(the_map.begin(), the_map.end(), [](std::pair<int, std::string> asd){ */
	/* 		std::cout<<asd.first<<std::endl; */
	/* 		}); */
	std::for_each(the_map.begin(), the_map.end(), [](auto& asd){
			std::cout<<asd.first<<std::endl;
			std::cout<<asd.second<<std::endl;
			});
	
	std::vector<int> qwe;
	qwe.push_back(21);
	qwe.push_back(12);
	qwe.push_back(65);
	qwe.push_back(76);
	qwe.push_back(3);
	qwe.push_back(7);

	/* std::for_each(qwe.begin(),qwe.end(),[](int n){ */
	/* 			std::cout<<n<<std::endl; */
	/* 		}); */

}
