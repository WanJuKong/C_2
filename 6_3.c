#include <stdio.h>
int main(void)
{
	union position
	{
		int class;
		char department[10];
	}my;
	int chk;
	printf("   [select]\n1: highschool\n2: university\n>>> ");
	scanf("%d", &chk);
	switch(chk)
	{
		case 1:
			printf("class >>> ");
			scanf("%d", &(my.class));
			printf("%d class",my.class);
			break;
		case 2:
			printf("major >>> ");
			scanf("%s", my.department);
			printf("%s", my.department);
			break;
		default:
			printf("no such selection");
	}
}
