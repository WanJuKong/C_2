#include <stdio.h>
#include <stdlib.h>

int main(int a, char **s)
{
	if(rename(s[1], s[2])==-1)
	{
		perror("rename failed");
		exit(1);
	}
	printf("rename %s to %s\n", s[1], s[2]);
	exit(0);
}

