#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdlib.h>

int main(void)
{
	int fd;
	if((fd=open("nodata", O_RDONLY))==-1)
	{
		if(errno==ENOENT)
			printf("nodata not exist\n");
		else
			printf("unexpected error = %d\n", errno);
		exit(1);
	}
	exit(0);
}

