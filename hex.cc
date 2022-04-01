#include <stdio.h>
#include <stdlib.h>

struct pack{
	int a=123;
	int v=34;
}__attribute__((packed));


int main()
{
	struct pack one;
	printf("%08x\n",one);
}
