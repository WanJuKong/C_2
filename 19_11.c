#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp;
	if((fp=fopen("nodata", "r"))==NULL)
	{
		perror("ERROR");
		exit(1);
	}
	exit(0);
}
