#include <stdio.h>
#define max 128

int main(void)
{
	char str[max];
	while(fgets(str, max, stdin)!=NULL)
	{
		puts(str);
	}
}
