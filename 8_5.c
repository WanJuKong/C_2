#include <stdio.h>
#include <string.h>
int main(void)
{
	char buf1[20]="linux";
	char buf2[20]="linux";

	strcat(buf1, "programming");
	strncat(buf2, "programming", 5);
	printf("buf1: %s\nbuf2: %s\n", buf1, buf2);
}
