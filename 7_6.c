#include <stdio.h>
#define name

int main(void)
{
#ifdef name
	printf("name def\n");
#endif

#ifndef name
	printf ("name undef\n");
#endif

#ifndef add
	printf("add def");
#endif
}

