#include <stdio.h>

int main(void)
{
	enum months {jan=1, fab, mar, apr, may, jun, jul, aug, sep, oct, nov, dec} mon;
	mon=jul;
	printf("%d\n", mon);
	printf("%d\n", nov);
}


