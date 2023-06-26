#include <stdio.h>
#include <string.h>
int main(void)
{
	char *ptr;
	ptr=strpbrk("seoulkorea", "ka");
	printf("%s\n", ptr);
}

