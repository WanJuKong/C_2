#include <stdio.h>
#include <stdlib.h>

int main(int a, char **s, char **e)
{
	while(*e)
		printf("%s\n", *e++);
}
