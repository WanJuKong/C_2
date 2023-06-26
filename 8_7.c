#include <stdio.h>
#include <string.h>
#define max 20

int main(void)
{
	char buf1[max];
	char buf2[max];
	strcpy(buf1, "linux");
	printf("%s\n", buf1);
	strcpy(buf2, "programming");
	printf("%s\n", buf2);
	strcpy(buf2, buf1);
	printf("%s", buf2);
}
