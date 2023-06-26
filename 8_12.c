#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str="hi linux programming";
	char *ptr;
	ptr=strstr(str, "linux");
	printf("%s\n", ptr);
}

