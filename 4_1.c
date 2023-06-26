#include <stdio.h>

int main(void)
{
	int i, num;
	int arr[20];
	printf("input number of data\n>>> ");
	scanf("%d", &num);
	for(i=0;i<num;i++)
	{
		printf("%dth number\n>>> ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("\ninput data\n");
	for(i=0;i<num;i++)
		printf("%d ", arr[i]);
	printf("\n rev data\n");
	for(i=num-1; i>=0;i--)
		printf("%d ", arr[i]);
	printf("\n");
}
