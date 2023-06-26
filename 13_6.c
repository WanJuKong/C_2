#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define t 5
#define e 15
int compare(const void *a, const void *b);
int main(void)
{
	int i;
	char table[t][e]={"hi", "linux","c","programming","java"};
	qsort(table, t, e, compare);
	for(i=0; i<t; i++)
		printf("%s\n", table[i]);
}
int compare(const void *a, const void *b)
{
	return strcmp((char *)a, (char *)b);
}

