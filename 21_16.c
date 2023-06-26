#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#define max 10

int main(void)
{
	int fd, count;
	char buf[max];
	if((fd=open("alphabet", O_RDONLY))==-1)
	{
		perror("open failed");
		exit(1);
	}
	lseek(fd, 5, SEEK_SET);
	count=read(fd, buf, max);
	write(STDOUT_FILENO, buf, count);
	close(fd);
	exit(0);
}
