#include <stdio.h>

int main(void)
{
	int a,b;
	printf("input num1\n>>> ");
	scanf("%d", &a);
	printf("input num2\n>>> ");
	scanf("%d", &b);
	printf("max: %d\nmin: %d\n", a>b?a:b, a<b?a:b);
}
