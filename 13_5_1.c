#include <stdio.h>
#include <search.h>
#include <string.h>

void hinput(char *a);
void search(char *a);

ENTRY item;
ENTRY *result;

int main(void)
{
	printf("0");
	hinput("linux");
	hinput("c");
	hinput("programming");
	printf("1");
	search("linux");
	search("java");
}

void hinput(char *a)
{
	printf("2");
	strncpy(a,item.key,1);
	strcpy(a,item.data);
	hsearch(item, ENTER);
}

void search(char *a)
{
	printf("3");
	strncpy(a,item.key,1);
	strcpy(a,item.data);
	if((result=hsearch(item,FIND))==NULL)
		printf("not found\n");
	else
		printf("found: %s\n", (char *)item.data);
}
