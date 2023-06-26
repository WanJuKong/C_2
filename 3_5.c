#include <stdio.h>

int main(void)
{
	int ch, n1=0, n2=0, n3=0;
	while((ch=getchar())!=EOF)
	{
		if((ch>='A')&&(ch<='Z'))
			n1++;
		else if((ch>='a')&&(ch<='z'))
			n2++;
		else
			n3++;
	}
	printf("uper: %d\nlower: %d\nex: %d\n", n1, n2, n3);
}

