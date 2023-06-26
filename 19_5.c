#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int main(void)
{
	FILE *fd;
	fd=fopen("nodata","r");
	assert(fd);
	exit(0);
}
