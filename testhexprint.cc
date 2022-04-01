#include <stdio.h>
#include <cstring>

typedef struct
{
	char str[10];
}newtype;

int main()
{
	newtype asd;
	strcpy(asd.str,"aqweadswa");
	/* const char* str="asdqweqw"; */
	/* printf("%010x\n",*str); */
	/* printf("%p\n",str); */
	printf("%020x\n",asd);
}
