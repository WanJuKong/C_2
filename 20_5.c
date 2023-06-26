#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int a, char **s)
{
	int opt;
	opterr=0;
	while((opt=getopt(a, s, "lf:ai"))!=-1)
	{
		switch(opt)
		{
			case 'l':
			case 'a':
			case 'i':
				printf("option: %c\n", opt);
				break;
			case'f':
				printf("option: %c's argument: %s\n",opt, optarg);
				break;
			case '?':
				printf("unknown option: %c\n", optopt);
		}
	}
	for(;optind<a;optind++)
		printf("argument: %s\n", s[optind]);
	exit(0);
}
