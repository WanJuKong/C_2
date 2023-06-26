#include <stdio.h>
void func(void);

int main(void)
{
	printf("calling\n");
	func();
	printf ("called\n");
}

void func(void)
{
	printf("function");
}
