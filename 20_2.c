#include <stdio.h>
#include <stdlib.h>
#define max(a,b) (a>b?a:b)

int main(int a, char **s)
{
	if(a!=3)
		exit(1);
	printf("max number: %d\n", max(atoi(s[1]),atoi(s[2])));
	exit(0);
}
