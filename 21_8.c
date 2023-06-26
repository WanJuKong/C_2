#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define m 10

int main(void)
{
	int fd;
	char buf1[m], buf2[m];
	if((fd=open("alphabet", O_RDONLY))==-1)
	{
		perror("open failed");
		exit(1);
	}
	read(fd, buf1, m);
	read(fd, buf2, m);
	printf("buf1[0]: %c\nbuf2[0]: %c\n",buf1[0], buf2[0]);
	close (fd);
	exit(0);
}
