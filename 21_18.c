#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
int main(int a, char **s)
{
	int fd;
	off_t filesize;
	if((fd=open(s[1], O_RDONLY))==-1)
	{
		perror("open failed");
		exit(1);
	}
	if((filesize=lseek(fd, 0, SEEK_END))==-1)
	{
		perror("lseek failed");
		exit(1);
	}
	printf("%s\'s size: %ld\n", s[1], filesize);
	close(fd);
	exit(0);
}

