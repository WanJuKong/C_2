#include <stdio.h>

int sum (int n);
int main(void)
{
	int n;
	printf("input number >>> ");
	scanf("%d",  &n);
	printf("sum of 1-%d: %d\n", n, sum(n));
}

int sum(int n)
{
	if(n==1)
		return 1;
	else
		return n+sum(n-1);
}
