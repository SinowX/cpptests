#include<iostream>

int testfunc(double asd, char qwe)
{
	std::cout<<__func__<<std::endl;
	return 0;
}

using F = int(double, char);


int main()
{
	F *asd;
	asd=testfunc;
	asd(12,43);
	/* F qwe; */
	/* qwe(12,43); */
	return 0;
}
