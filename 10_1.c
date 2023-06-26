#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	struct list
	{
		char name[10];
		int age;
		struct list *next;
	};
	struct list *ptr;
	if((ptr=(struct list *)malloc(sizeof(struct list)))==NULL)
		exit(1);
	strcpy(ptr->name, "kim");
	ptr->age=19;
	if((ptr->next=(struct list *)malloc(sizeof(struct list)))==NULL)
		exit(1);
	strcpy(ptr->next->name, "l");
	ptr->next->age=21;
	printf("%s's age: %d\n", ptr->name, ptr->age);
	printf("%s's age: %d\n", ptr->next->name, ptr->next->age);
}
