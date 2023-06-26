#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *pt;
	printf("%ld\n",strtol("3579", NULL, 10));
	printf("%ld\n",strtol("324", &pt, 2));
	printf("%s\n",pt);
}
