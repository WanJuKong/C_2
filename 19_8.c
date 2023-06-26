#include <stdio.h>
#include <stdlib.h>

void mya(int e);

int main(void)
{
	mya(7==7);
	printf("y\n");
	mya(8==1);
	printf("n\n");
}

void mya(int e)
{
	if(!e)
	{
		printf("%s: %d: Assertion failed.\n",__FILE__, __LINE__);
		abort();
	}
}
