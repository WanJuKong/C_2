#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int a, char **s)
{
	if(link(s[1], s[2])==-1)
	{
		perror("link failed");
		exit(1);
	}
	sleep(5);
	if(unlink(s[1])==-1)
	{
		perror("unlink failed");
		unlink(s[2]);
		exit(1);
	}
	printf("move %s to %s\n", s[1], s[2]);
	exit(0);
}

