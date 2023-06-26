#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	n=strspn("seoulkorea", "elmnopsu");
	printf("%d\n",n);
}

