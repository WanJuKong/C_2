#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int a, char **s)
{
	int opt;
	while((opt=getopt(a,s,"lf:ai"))!=-1)
	{
		switch(opt)
		{
			case 'l':
			case 'a':
			case 'i':
				printf("option: %c\n",opt);
				break;
			case 'f':
				printf("option %c'sargument: %s\n",opt, optarg);
				break;
			default:
				printf("unknown option: %c\n",optopt);
		}
	}
	exit(0);
}
