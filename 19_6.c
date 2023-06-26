#include <stdio.h>
#define NDEMUG
#include <assert.h>
#include <stdlib.h>

int main(void)
{
	FILE *fd;
	fd=fopen("nodata","r");
	assert(fd);
	printf("f");
	fclose(fd);
	exit(0);
}

