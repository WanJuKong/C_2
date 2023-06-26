#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
	int fd1, fd2;
	fd1=open("test_file_1", O_RDONLY);
	fd2=open("test_file_2", O_WRONLY);
	printf("file 1: %d\nfile 2: %d\n", fd1, fd2);
	close(fd1);
	close(fd2);
}
