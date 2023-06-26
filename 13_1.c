#include <stdio.h>
#include <search.h>
#include <string.h>

#define t 10
#define e 15
int compare(const void *a, const void *b);

int main(void)
{
	char table[t][e]={"hello","linux","c"};
	char *ptr;
	size_t datanum=3;
	ptr=(char *)lsearch("linux", table, &datanum, e, compare);
	printf("%s\n", ptr);
	ptr=(char *)lsearch("programming", table, &datanum, e, compare);
	printf("%s\n", ptr);
}

int compare(const void *a, const void *b)
{
	return strcmp((char *)a, (char *)b);
}
