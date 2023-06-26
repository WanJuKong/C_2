#include <stdio.h>

int main(void)
{
	int ch;
	printf("input char\n>>> ");
	ch=getchar();
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		printf("alphabet\n");
	else if(ch>='0'&&ch<='9')
		printf("number\n");
	else
		printf("other\n");
}

