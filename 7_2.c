#include <stdio.h>
#define max(a,b)(a>b?a:b)

int main(void)
{
	int i, j;
	printf("input int >>> ");
	scanf("%d%d", &i, &j);
	printf("max num: %d", max(i,j));
}
