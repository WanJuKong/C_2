#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#define m 1024

int main(int a, char **s)
{
	int fd1, fd2, count;
	char buf[m];
	if(a!=3)
	{
		perror("argc is not 3");
		exit(1);
	}
	if((fd1=open(s[1], O_RDONLY))==-1)
	{
		perror("open failed");
		exit(1);
	}
	if((fd2=open(s[2], O_WRONLY | O_APPEND))==-1)
	{
		perror("open failed");
		exit(1);
	}
	while((count=read(fd1, buf, m))>0)
		if(write(fd2, buf, count)!=count)
		{
			perror("write failed");
			exit(1);
		}
	close(fd1);
	close(fd2);
	exit(0);
}
