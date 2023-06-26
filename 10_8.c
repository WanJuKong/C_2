#include <stdio.h>
#include <string.h>

int main(void)
{
	char *string="abcdeabcdeabcde";
	while (1)
	{
		if((string=memchr(string, 'a', strlen(string)))==NULL)
			break;
		printf("%s\n", string);
	}
}

