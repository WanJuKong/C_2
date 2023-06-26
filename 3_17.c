#include <stdio.h>

int main(void)
{
	int i;
	printf("input integer >>> ");
	scanf("%d",&i);
	switch (i)
	{
		case 1:
			printf("1\n");
		case 2:
			printf("2\n");
		case 3:
			printf("3\n");
		default:
			printf("others\n");
	}
}
