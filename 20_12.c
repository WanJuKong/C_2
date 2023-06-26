#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *home;
	if((home=getenv("HOME"))!=NULL)
		printf("home directoy: %s\n", home);
	putenv("HOME=/home/yeet");
	if((home=getenv("HOME"))!=NULL)
		printf("new home directoy: %s\n", home);
}
