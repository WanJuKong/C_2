#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
int main(void)
{
	int fd;
	if((fd=dup(1))==-1)
	{
		perror("fd=dup failed");
		exit(1);
	}
	write(fd, "ABCD", 5);
	exit(0);
}


