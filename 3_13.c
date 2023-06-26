#include <stdio.h>
int main(void)
{
	char ch;
	while((ch=getchar())!=EOF)
	{
		ch=((ch>='a')&&(ch<='z'))?ch-'a'+'A':ch;
		printf("%c",ch);
	}
}

