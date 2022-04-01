#include <stdio.h>

class X{};
class A: public virtual X{};
class B: public virtual X{};
class C: public A, public B{};

class D: public virtual C{};

int main()
{
	printf("%d %d %d %d %d\n",sizeof(X),sizeof(A),sizeof(B),sizeof(C),sizeof(D));
}
