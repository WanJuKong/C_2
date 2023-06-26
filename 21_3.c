#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
int main(void)
{
	int fd;
	if((fd=open("non_exist", O_RDONLY))==-1)
	{
		perror("open failed");
		exit(1);
	}
	close(fd);
	exit(0);
}
