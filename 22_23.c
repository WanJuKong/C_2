#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void)
{
	if(chroot("home/second")==-1)
	{
		perror("chroot failed");
		exit(1);
	}
	if(mkdir("rootdir", 0777)==-1)
	{
		perror("mkdir failed");
		exit(1);
	}
	exit(0);
}
