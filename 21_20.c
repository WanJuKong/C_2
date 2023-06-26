#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(int a, char **s)
{
	int fd;
	if((fd=open(s[1], O_WRONLY))==-1)
	{
		perror("open failed");
		exit(1);
	}
	if(ftruncate(fd, 34)==-1)
	{
		perror("ftruncate failed");
		exit(1);
	}
	close(fd);
	exit(0);
}
