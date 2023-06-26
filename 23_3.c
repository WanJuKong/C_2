#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void)
{
	pid_t pid;
	if((pid=fork())==-1)
	{
		perror("fork failed");
		exit(1);
	}
	else if(pid==0)
		printf("pid: %d\tparent pid: %d\n", getpid(), getppid());
	else
		printf("pid: %d\tchild pid: %d\n", getpid(), pid);
}
