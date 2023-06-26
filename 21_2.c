#include <fcntl.h>
#include <unistd.h>
#define s 1024
int main(void)
{
	int fd1, fd2;
	ssize_t n;
	char buf[s];

	fd1=open("test_file_1", O_RDONLY);
	fd2=open("test_file_2", O_WRONLY);
	n=read(fd1, buf, s);
	write(fd2, buf, n);
	close(fd1);
	close(fd2);
}
