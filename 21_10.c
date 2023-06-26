#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int fd;
	char buf[19]="linux c programming";
	if((fd=open("newfile",O_WRONLY | O_CREAT, 0644))==-1)
	{
		perror("open failed");
		exit(1);
	}
	if(write(fd, buf, 19)==-1)
	{
		perror("write failed");
		exit(1);
	}
	close(fd);
	exit(0);
}
