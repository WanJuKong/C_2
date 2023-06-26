#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *value;
	setenv("HOME", "/hi", 0);
	value=getenv("HOME");
	printf("HOME: %s\n",value);
	setenv("HOME", "/hello", 0);
	value=getenv("HOME");
	printf("HOME: %s\n",value);
	exit(0);
}
