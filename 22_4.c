#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

int main(int a, char **s)
{
	struct stat st;
	if(stat(s[1], &st)==-1)
	{
		perror("stat failed");
		exit(1);
	}
	switch (st.st_mode&S_IFMT)
	{
		case S_IFREG:
			printf("regular\n");
			break;
		case S_IFDIR:
			printf("directory\n");
			break;
		case S_IFCHR:
			printf("chractor special\n");
			break;
		case S_IFBLK:
			printf("block\n");
			break;
		case S_IFIFO:
			printf("fifo\n");
			break;
	}
	exit(0);
}
