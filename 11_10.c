#include <stdio.h>
int main(void)
{
	FILE *fp;
	int ch='a';
	fp=fopen("source", "r");
	fputc(ch, fp);
	if(ferror(fp))
		puts("error");
	else
		puts("no error");
	fclose(fp);
}
