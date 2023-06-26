#include <stdio.h>

int main(void)
{
	int w=6, num=5;
	printf("%*d", w, num);
	printf("%2$*1$d",w, num);
}
