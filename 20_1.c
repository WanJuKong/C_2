#include <stdio.h>
#include <stdlib.h>

int main(int a, char **s)
{
	int i;
	printf("argc: %d\n",a);
	for(i=0;i<a;i++)
		printf("argc[%d]: %s\n", i, s[i]);
	exit(0);
}
