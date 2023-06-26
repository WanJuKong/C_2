#include <stdio.h>
#include <string.h>
int main(void)
{
	char *str="abcabcabcabcabc";
	char *ptr;
	ptr=strrchr(str, 'a');
	printf("%s\\n",ptr);
}
