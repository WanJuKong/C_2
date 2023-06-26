#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	pid_t pid;
	if((pid=fork())==-1)
	{
		perror("fork failed");
		exit(1);
	}
	else if(pid==0)
		printf("child process\n");
	else
		printf("parent process\n");
	exit(0);
}
