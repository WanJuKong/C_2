#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	int fd;
	if((fd=open("exist_file", O_WRONLY | O_CREAT|O_TRUNC, 0644))==-1)
	{
		perror("open failed");
		exit(1);
	}
	close(fd);
	exit(0);
}
