#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define max 100

int main(int a, char **s)
{
	char name[max];
	getcwd(name, max);
	printf("directory: %s\n", name);
	mkdir(s[1], 0755);
	chdir(s[1]);
	getcwd(name, max);
	printf("direstory: %s\n", name);
	chdir("..");
	getcwd(name, max);
	printf("directory: %s\n", name);
	rmdir(s[1]);
	exit(0);
}
