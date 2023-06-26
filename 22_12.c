#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>

int find_(char *dir, char *file);

int main(int a, char **s)
{
	if(find_(s[1], s[2]))
		printf("found %s\n", s[2]);
	else
		printf("not found %s\n", s[2]);
	exit(0);
}

int find_(char *dir, char *file)
{
	DIR *dp;
	struct dirent *dirp;
	if((dp=opendir(dir))==NULL)
	{
		perror("opendir failed");
		exit(1);
	}
	while((dirp=readdir(dp)))
	{
		if(strcmp(dirp->d_name, file))
		{
			closedir(dp);
			return 1;
		}
	}
	closedir(dp);
	return 0;
}
