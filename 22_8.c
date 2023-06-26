#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>

int main(int a, char **s)
{
	int fd;
	if(mkdir(s[1], 0755)==-1)
	{
		perror("mkdir failed");
		exit(1);
	}
	if(chdir(s[1])==-1)
	{
		printf("chdir failed");
		exit(1);
	}
	if((fd=open (s[2], O_WRONLY|O_CREAT, 0644))==-1)
		perror("open failed");
	exit(1);
	write(fd,s[3],strlen(s[3]));
	close(fd);
	exit(0);
}
