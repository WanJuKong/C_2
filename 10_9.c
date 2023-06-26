#include <stdio.h>
#include <string.h>

int main(void)
{
	char *quit="quit";
	char *string;
	while(1)
	{
		printf("input string\n>>> ");
		scanf("%s",string);
		if(!memcmp(string, quit, 4))
			break;
		printf("%s\n", string);
	}
}
