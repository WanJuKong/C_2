#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[]="hello linux c programming";
	char delim[]=" ";
	char *ptr;
	ptr=strtok(str, delim);
	printf("%s\n", ptr);
	while((ptr=strtok(NULL, delim)))
		printf("%s\n", ptr);
}
