#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int a, char **s)
{
	if(symlink(s[1], s[2])==-1)
	{
		perror("symlink failed");
		exit(1);
	}
	printf("link %s to %s\n", s[1], s[2]);
	exit(0);
}
