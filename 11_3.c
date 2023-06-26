#include <stdio.h>

int main(void)
{
	int i;
	float j;
	char str[10];
	printf("input int, float, string\n>>> ");
	scanf("%d%f%s", &i, &j, str);
	printf("%d %f %s\n", i, j, str);
}
