#include <stdio.h>
void func(int n1, int n2);
int main(void)
{
	func(11,7);
}

void func(int n1, int n2)
{
	printf("%d %d", n1, n2);
}
