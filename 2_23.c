#include <stdio.h>

int func();
int main(void)
{
	int i;
	i=func();
	printf("%d\n",i);
}

int func(void)
{
	return 5+7;
}
