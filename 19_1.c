#include <stdio.h>
#include <errno.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	if((fp=fopen("nodata", "r")) ==NULL)
	{
		printf("errno = %d\n", errno);
		exit(1);
	}
	exit(0);
}
