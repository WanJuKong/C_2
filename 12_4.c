#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	srand(10);
	for(i=0;i<10;i++)
		printf("%d ",rand()%100);
	printf("\n");
}
