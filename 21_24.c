#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(int a, char **s)
{
	int fd;
	if((fd=open(s[1],O_WRONLY))==-1)
	{
		perror("fd=open failed");
		exit(1);
	}
	if((dup2(fd, 7))==-1)
	{
		perror("dup2 failed");
		exit(1);
	}
	write(7, "ABCD", 5);
	close(fd);
	exit(0);
}

