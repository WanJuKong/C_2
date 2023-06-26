#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(void)
{
	if(chmod("changemode_test_1",0644)==-1)
		perror("chmod failed");
	if(chmod("changemode_test_2", S_IRUSR|S_IWUSR|S_IRGRP|S_IROTH)==-1)
		perror("chmod failed");
	exit(0);
}
