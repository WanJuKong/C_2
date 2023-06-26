#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	printf("1\n");
	if(fork()==-1)
	{
		perror("fork failed");
		exit(1);
	}
	printf("2\n");
}

