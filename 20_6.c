#include <stdio.h>
#include <stdlib.h>

void output_file(FILE *fp);
int main(int a, char **s)
{
	FILE *fp;
	if(a==1)
		exit(1);
	while(*++s)
	{
		printf("\n[filename: %s]\n\n", *s);
		if((fp= fopen(*s, "r"))==NULL)
		{
			perror("fopen failed");
			exit(2);
		}
		output_file(fp);
	}
	exit(0);
}

void output_file(FILE *fp)
{
	int ch;
	while((ch=getc(fp))!=EOF)
		putc(ch, stdout);
}

		
