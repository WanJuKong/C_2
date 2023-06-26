#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void)
{
	DIR *dp;
	struct dirent *dirp;
	if((dp=opendir("."))==NULL)
	{
		perror("opendir failed");
		exit(1);
	}
	while((dirp=readdir(dp)))
		printf("%s ", dirp->d_name);
	printf("\n");
	closedir(dp);
	exit(0);
}
