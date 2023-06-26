#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void)
{
	int fd;
	if((fd=open("exist_file", O_RDONLY|O_CREAT))==-1)
	{
		perror("open failed");
		exit(1);
	}
	close(fd);
	exit(0);
}
