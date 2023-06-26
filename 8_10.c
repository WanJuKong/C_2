#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str="abcdefghijklmnopqrstuvwxyz";
	char *ptr;
	ptr=strchr(str, 'k');
	printf("%s\n", ptr);
}
