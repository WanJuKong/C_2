#include <stdio.h>
 int main(void)
{
	char *str;
	str="hello";
	for(;*str;str++)
		printf("%s\n", str);
}
