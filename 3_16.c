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
			break;
		case 2:
			printf("2\n");
			break;
		case 3:
			printf("3\n");
			break;
		default:
			printf("others\n");
	}
}
