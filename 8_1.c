#include <stdio.h>
int main(void)
{
	int ch, num=0;
	while((ch=getchar())!=EOF)
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
			num++;
	printf("%d", num);
}
