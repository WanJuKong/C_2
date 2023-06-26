#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int filestat(int fd, char *file);

int main(int a, char **s)
{
	int fd, mode;
	mode=atoi(s[2]);
	if((fd=open(s[1], mode))==-1)
	{
		perror("open failed");
		exit(1);
	}
	if (filestat(fd,s[1])==-1)
		exit(2);
	close(fd);
	exit(0);
}

int filestat(int fd,char *file)
{
	int flag;
	if((flag=fcntl(fd, F_GETFL))==-1)
	{
		perror("fcntl failed");
		return -1;
	}
	switch(flag &O_ACCMODE){
		case O_RDONLY:
			printf("%s is read only file\n", file);
			break;
		case O_WRONLY:
			printf("%s is write only file\n", file);
			break;
		case O_RDWR:
			printf("%s is read-write file\n", file);
			break;
		default:
			printf("no such mode\n");
	}
	return 0;
}
