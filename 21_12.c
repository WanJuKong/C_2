#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#define m 1024

int main(void)
{
	int count;
	char buf[m];
	while((count=read(STDIN_FILENO, buf, m))>0)
	{
		if(write(STDOUT_FILENO, buf, count)!=count)
		{
			perror("write failed");
			exit(1);
		}
	}
	exit(0);
}
