#include <stdio.h>
int main(void)
{
	char a='d';
	size_t size;
	snprintf(a,size);
	printf("%c, %lu",a,size);
}

