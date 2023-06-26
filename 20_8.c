#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void output_file(FILE *fp);

int main(int a, char **s)
{
	FILE *fp;
	if(a==1)
		exit(1);
	while(*++s)
	{
		printf("\n[filename: %s]\n", *s);
		if((fp=fopen(*s,"r"))==NULL)
		{
			perror("fopen failed");
			exit(2);
		}
		output_file(fp);
		fclose(fp);
	}
	exit(0);
}

void output_file(FILE *fp)
{
	int ch, line=1;
line_:
	printf("%-3d", line++);
	while((ch=getc(fp))!=EOF)
	{
		putc(ch,stdout);
		if(ch=='\n')
		{
			if((ch=getc(fp))==EOF)
				break;
			ungetc(ch, fp);
			goto line_;
		}
	}
}
