#include <stdio.h>

void extn(void)
{
	printf("extern");
}

static void stat(void)
{
	printf("static function\n");
}
