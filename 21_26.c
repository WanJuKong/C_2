#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
int main(int a, char **c)
{
	int fd, flag;
	struct
	{
		char name[15];
		char phone[15];
	}s;
	if((fd=open(c[1], O_RDWR|O_CREAT, 0644))==-1)
	{
		perror("open failed");
		exit(1);
	}
	if((flag=fcntl(fd, F_GETFL))==-1)
	{
		perror("fcntl failed");
		exit(1);
	}
	flag|=O_APPEND;
	if((fcntl(fd, F_SETFL, flag))==-1)
	{
		perror("fcntl failed");
		exit(1);
	}
	while(1)
	{
		printf("input name\n>>> ");
		scanf("%s", s.name );
		if(!strcmp(s.name, "quit"))
			break;
		printf("input phone number\n>>> ");
		scanf("%s", s.phone);
		write(fd, (char *)&s, sizeof(s));
	}
	close(fd);
	exit(0);
}
