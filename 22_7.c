#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	if(mkdir("dir", 0755)==-1)
	{
		perror("mkdir faield");
		exit(1);
	}
	if(rmdir("dir")==-1)
	{
		perror("rmdir failed");
		exit(1);
	}
	exit(0);
}
