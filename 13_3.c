#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define t 5
#define e 10
int compare(const void *a, const void *b);

int main(void)
{
	char table[t][e]={"c", "html", "java", "perl", "xml"};
	char *ptr;
	if((ptr=(char *)bsearch("java", table, t, e, compare))==NULL)
		printf("not found\n");
	else
		printf("%s\n", ptr);
	if((ptr=(char *)bsearch("linux", table, t, e, compare))==NULL)
		printf("not found\n");
	else
		printf("%s\n", ptr);
}

int compare(const void *a, const void *b)
{
	return strcmp((char *)a, (char *)b);
}
