#include <stdio.h>
#include <string.h>

int main(void)
{
	char *ptr;
	ptr = strdup("hi");
	printf("%s\n", ptr);
}
