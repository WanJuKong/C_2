#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int a, char **s)
{
	struct stat st1, st2;
	if(symlink(s[1], s[2])==-1)
	{
		perror("symlink failed");
		exit(1);
	}
	if(stat(s[1], &st1)==-1)
	{
		perror("stat failed");
		exit(1);
	}
	if(lstat(s[2], &st2)==-1)
	{
		perror("stat failed");
		exit(1);
	}
	printf("%ld bytes: %ld bytes\n", st1.st_size, st2.st_size);
	exit(0);
}

