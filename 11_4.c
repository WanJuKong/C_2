#include <stdio.h>
#define max 100
int main(void)
{
	int i=123;
	float j=23.456;
	char buffer1[max], buffer2[max];
	sprintf(buffer1, "%d", i);
	sprintf(buffer2, "%.3f", j);
	sscanf(buffer1, "%o", &i);
	printf("%d\n", i);
	sscanf(buffer2, "%e", &j);
	printf("%e\n", j);
}
