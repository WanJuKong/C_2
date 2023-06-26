#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#define m 100
#define fn "alphabet"

int main(void)
{
	int fd, i;
	char buf[m];
	long int length=0;
	if((fd=open(fn,O_RDONLY))==-1)
	{
		perror("open failed");
		exit(1);
	}
	while((i=read(fd, buf, m))>0)
		length += i;
	printf("total characters in %s: %ld\n", fn, length);
	close(fd);
	exit(0);
}
