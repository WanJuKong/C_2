#include <stdio.h>

int main(int a, char **s)
{
	int i;
	for(i=1; i<a;i++)
	{
		if(s[i][0]=='-')
			printf("option: %s\n", s[i]+1);
		else
			printf("argument: %s\n", s[i]);
	}
}
