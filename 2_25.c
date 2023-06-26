#include <stdio.h>
int add(int n1, int n2);

int main(void)
{
	int result;
	result=add(11,7);
	printf("%d\n",result);
}

int add(int n1, int n2)
{
	return n1+n2;
}

