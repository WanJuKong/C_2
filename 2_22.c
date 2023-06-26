#include <stdio.h>

void func1(void);
void func2(void);
int main(void)
{
	func1();
	func2();
}

void func1(void)
{
	printf("function 1");
}

void func2(void)
{
	printf("function 2");
}

