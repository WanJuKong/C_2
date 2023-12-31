#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <dirent.h>
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
		printf("%s ",dirp->d_name);
	printf("\n");
	rewinddir(dp);
	while((dirp=readdir(dp)))
		printf("%s ", dirp->d_name);
	printf("\n");
	closedir(dp);
	exit(0);
}
