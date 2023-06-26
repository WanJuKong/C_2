#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>

int main(int a, char **s)
{
	DIR *dp;
	struct dirent *dirp;
	char *dir;
	if(a==1)
		dir=".";
	else
		dir=s[1];
	if((dp=opendir(dir))==NULL)
	{
		perror("opendir failed");
		exit(1);
	}
	while((dirp=readdir(dp)))
	{
		if(strncmp(dirp->d_name , ".",1))
			printf("%s ", dirp->d_name);
	}
	printf("\n");
	closedir(dp);
	exit(0);
}
