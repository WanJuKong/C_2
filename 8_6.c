#include <stdio.h>
#include <string.h>

int main(void)
{
	char buf[20];
	int line=1;
	while(1)
	{
		printf("input string >>> ");
		scanf("%s", buf);
		if(!strcmp(buf, "quit"))
			break;
		printf("%3d: %s\n", line ++, buf);
	}
}

