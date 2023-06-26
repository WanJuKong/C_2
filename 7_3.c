#include <stdio.h>
#define size 1000
int main(void)
{
	int num;
	num = size;
	printf("%d\n", num);

#undef size
#define size 5000
	printf("%d\n", size);
}
