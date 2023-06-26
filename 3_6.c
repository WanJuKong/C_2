#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(void)
{
	char a, b, c;
	int slct;
	char s[4];
	while(1)
	{
		printf("\n < menu >\n1. and\n2. or\n3. xor\n4.exit\n>>> ");
		scanf("%d", &slct);
		if(slct==4)
			exit(0);
		printf("intput 2 char >>> ");
		scanf("%c%c", &a, &b);
		switch (slct)
		{
			case 1:
				c=a&b;
				strcpy(s,"and");
				break;
			case 2:
				c=a|b;
				strcpy(s,"or");
				break;
			case 3:
				c=a^b;
				strcpy(s,"xor");
				break;
		}
		printf("\n%d%s%d\n: %d\n", a, s, b, c);
	}
}

