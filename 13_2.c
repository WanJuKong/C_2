#include <stdio.h>
#include <search.h>
#include <string.h>

#define t 10
#define e 15

int compare(const void *a, const void *b);

int main(void)
{
	char table[t][e]={"hi", "linux", "c"};
	char *ptr;
	size_t datanum =3;
	if ((ptr=(char *)lfind("linux", table, &datanum, e, compare))==NULL)
		printf("not found\n");
	else
		printf("%s\n", ptr);
}

int compare(const void *a, const void *b)
{
	return strcmp((char *)a, (char *)b);
}
