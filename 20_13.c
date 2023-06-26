#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int a, char **s)
{
	char *value, *string;
	if(a==1||a>3)
		exit(1);
	if((value=getenv(s[1]))!=NULL)
		printf("%s: %s\n", s[1], value);
	else
		printf("%s: no value\n",s[1]);
	if(a==3)
	{
		string=(char*)malloc(strlen(s[1])+strlen(s[2])+2);
		strcpy(string, s[1]);
		strcat(string, "=");
		strcat(string, s[2]);
		putenv(string);
		if((value=getenv(s[1]))!=NULL)
			printf("%s's new value: %s\n", s[1], value);
		else
			printf("error: %s\n", string);
	}
	exit(0);
}
