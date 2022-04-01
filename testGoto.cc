#include <iostream>



void hello() {

/* goto SAD; */
	std::cout<<"twqer"<<std::endl;

SAD:
	std::cout<<"hello"<<std::endl;

	std::cout<<"hdiuqwh"<<std::endl;

	{
		goto SAD;
	}
	

}



int main() {
	hello();
}
