#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>
#define max 512

int main(int a, char **s)
{
	DIR *dp;
	struct dirent *dirp;
	struct stat st;
	char *dir, filename[max], list[max], buf[max];
	int index, i;
	if(a==1)
		dir=".";
	else
		dir=s[1];
	if((dp=opendir(dir))==NULL)
	{
		perror("opendir failed");
		exit(1);
	}
	while((dirp=readdir(dp))){
		index=0;
		if(!strncmp(dirp->d_name, ".", 1))
			continue;
		sprintf(filename, "%s/%s", dir, dirp->d_name);
		if(lstat(filename, &st)==-1)
		{
			perror("stat failed");
			exit(1);
		}
		switch(st.st_mode &S_IFMT)
		{
			case S_IFREG:
				list[index++]='-';
				break;
			case S_IFDIR:
				list[index++]='d';
				break;
			case S_IFIFO:
				list[index++]='p';
				break;
			case S_IFLNK:
				list[index++]='l';
		}
		for(i=0;i<3;i++)
		{
			list[index++]=(st.st_mode & (S_IREAD >> i*3))?'r':'-';
			list[index++]=(st.st_mode & (S_IWRITE >> i*3))?'w':'-';
			list[index++]=(st.st_mode & (S_IEXEC >> i*3))?'x':'-';
		}
		list[index]='\0';
		printf("%s%5ld %s ", list, st.st_nlink, (getpwuid(st.st_uid))->pw_name);
		printf("%s%9ld ", (getgrgid(st.st_gid))->gr_name, st.st_size);
		sprintf(buf, "%s", ctime(&st.st_mtime));
		buf [strlen(buf)-1]='\0';
		printf("%s %s\n", buf, dirp->d_name);
	}
	closedir(dp);
	exit(0);
}
