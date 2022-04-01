#include <iostream>


class Sigleton {

private:
	int _data;
	Sigleton(int asd) {
		std::cout<<"Hello"<<std::endl;
		_number = asd;
		_data = asd;
	}

public:
	static int _number;
	static Sigleton& getInstance(int asd) {
		static Sigleton _ins(asd);
		return _ins;
	}

	void print() {
		/* std::cout<< _data <<std::endl; */
		std::cout<< _number <<std::endl;
	}
};
int Sigleton::_number;


int main()
{
	Sigleton::getInstance(12).print();
	Sigleton::getInstance(13).print();
	Sigleton::getInstance(7549).print();
	Sigleton::getInstance(7549).print();
	Sigleton::getInstance(7549).print();
	Sigleton::getInstance(7549).print();
	Sigleton::getInstance(7549).print();
}
