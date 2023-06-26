#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("%g\n", strtod("1.23",NULL));
	printf("%g\n", strtod("0.12E12", NULL));
}
