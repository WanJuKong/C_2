#include <stdio.h>
#include <string.h>
#define max 20

int main(void)
{
	char str[max];
	int i, j, ch;
	printf("input string\n>>> ");
	scanf("%s",str);
	for(i=0, j=strlen(str)-1; i<j; i++, j--)
	{
		ch=str[i];
		str[i]=str[j];
		str[j]=ch;
	}
	printf("reversed: %s\n", str);
}
