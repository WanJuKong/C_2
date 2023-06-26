#include <stdio.h>
#include <stdlib.h>

extern char **environ;

int main(void)
{
	while (*environ)
		printf("%s\n", *environ++);
}

