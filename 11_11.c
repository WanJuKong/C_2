#include <stdio.h>
int main(void)
{
	FILE *fp;

	fp=fopen("source", "r");
	fgetc(fp);
	fgetc(fp);
	printf("%ld\n", ftell(fp));
	rewind(fp);
	printf("%ld\n", ftell(fp));
	fclose(fp);
}


