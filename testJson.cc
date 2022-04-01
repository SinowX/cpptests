#include <nlohmann/json.hpp>
#include <iostream>
using namespace std;

using json=nlohmann::json;
int main()
{
	json j_exp;
	j_exp["asda"]=123;
	j_exp["asd"]=54;

	cout<<j_exp<<endl;
	json j_arr=json::array();
	
	/* j_arr.insert("asd"); */
	j_arr.push_back("asdasd");
	j_arr.push_back("qwe");
	/* j_arr[0]="asdw"; */
	/* j_arr[1]="asd"; */
	
	cout<<j_arr<<endl;
}
