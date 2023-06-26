#include <stdio.h>
int main(void)
{
	int a, b, c=2, d=2;
	a=++c;
	b=d++;
	printf("%d %d %d %d\n",a ,b, c, d);
}
