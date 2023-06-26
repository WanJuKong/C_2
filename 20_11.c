#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *home, *work, *tmp;
	if((home=getenv("HOME"))!=NULL)
		printf("home directory: %s\n", home);
	if((work=getenv("PWD"))!=NULL)
		printf("warking directory: %s\n", work);
	if((tmp=getenv("LINUX"))!=NULL)
		printf("temp: %s\n", tmp);
}
