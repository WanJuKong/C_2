#include <stdio.h>
#include <search.h>
#include <string.h>

int compare(const void *a, const void *b);
void printtree(const void const *node, const VISIT order, const int depth);
int main(void)
{
	void *root;
	root = NULL;

	tsearch("hi",&root, compare);
	tsearch("linux",&root, compare);
	tsearch("c", &root, compare);
	twalk(root, printtree);
	tdelete("hi", &root, compare);
	twalk(root, printtree);
}

int compare(const void *a, const void *b)
{
	return strcmp((char *)a, (char *)b);
}

void printtree(const void const *node, const VISIT order, const int depth)
{
	char *str;
	str=*(char **)node;
	if(order==postorder||order==leaf)
		printf("string: %s\n", str);
}
