#include <stdio.h>
int main(void)
{
	int i, fac, n;
	i=fac=1;
	printf("input num >>> ");
	scanf("%d", &n);
	while(i<=n)
	{
		fac *=i++;
	}
	printf("%d factorial: %d\n", n, fac);
}

