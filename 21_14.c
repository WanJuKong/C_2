#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define max 10

int main(void)
{
	int fd;
	char buf[max]="c program";
	if((fd=open("test_file_1", O_WRONLY | O_CREAT | O_APPEND, 0644))==-1)
	{
		perror("open failed");
		exit(1);
	}
	write(fd, buf, strlen(buf));
	close(fd);
	exit(0);
}

