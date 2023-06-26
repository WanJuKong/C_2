#include <stdio.h>

void func(void);
static int c=0;
int main(void)
{
	int i;
	for(i=0;i<10;i++)
		func();
	printf("count: %d\n", c);
}
