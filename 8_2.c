#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch;
	while((ch=getchar())!=EOF){
		if(isalpha(ch))
			putchar(ch);
	}
	putchar('\n');
}
