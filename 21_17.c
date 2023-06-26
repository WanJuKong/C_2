#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#define max 26
int main(int a, char **s)
{
	int i, fd;
	char str[max];
	if((fd=creat(s[1], 0644))==-1)
	{
		perror("creat failed");
		exit(1);
	}
	for(i='A'; i<='Z'; i++)
		str[i-'A']=i;
	write(fd, str, max);
	if(lseek(fd, 30, SEEK_SET)==-1)
	{
		perror("lseek failed");
		exit(1);
	}
	write(fd, "abcd", 4);
	close(fd);
	exit(0);
}

