#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#define max 26
int main(void)
{
	int i, fd;
	char str[max];
	if((fd=open("alphabet", O_WRONLY | O_CREAT, 0644))==-1)
	{
		perror("open failed");
		exit(1);
	}
	for(i='A'; i<='Z'; i++)
	{
		str[i-'A']=i;
	}
	write(fd, str, max);
	close(fd);
	exit(0);
}
