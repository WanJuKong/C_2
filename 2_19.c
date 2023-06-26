#include <stdio.h>
void func(void)
{
	printf("function\n");
}

int main(void)
{
	printf("calling\n");
	func();
	printf("called\n");
}
