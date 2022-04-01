#include <iostream>
#include <bitset>



int main()
{
	
	int a=324;
	std::bitset<8> asd(a);
	std::cout<<asd<<std::endl;
	std::cout<<asd[2]<<std::endl;

	uint8_t b[5]={0xfa,0x00,0xff,0xff,0x00};
	std::bitset<40> bsd;
		printf("%p\n",b);

	std::cout<<sizeof(b)<<std::endl;

	for(int i=sizeof(b)-1; i>=0; i--)
	{
		bsd|=b[i];
		/* bsd<<=8; */
		std::cout<<bsd<<std::endl;;
		if(i>0) bsd<<=8;
	}

	std::cout<<bsd<<std::endl;;
	std::cout<<bsd[0]<<std::endl;;
	std::cout<<bsd[39]<<std::endl;;
	/* bsd<<=10; */
	/* std::cout<<bsd<<std::endl;; */

}
