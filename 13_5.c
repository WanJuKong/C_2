#include <stdio.h>
#include <search.h>
int main(void)
{
	ENTRY item;
	ENTRY *result;
	hcreate(5);
	item.key="l";
	item.data="linux";
	hsearch(item,ENTER);
	item.key="c";
	item.data="c";
	hsearch(item,ENTER);
	item.key="p";
	item.data="programming";
	hsearch(item,ENTER);
	item.key="l";
	item.data="linux";
	if((result=hsearch(item,FIND))==NULL)
		printf("not found\n");
	else
		printf("found: %s\n", (char *)item.data);
	item.key="j";
	item.data="java";
	if((result=hsearch(item,FIND))==NULL)
		printf("notfound\n");
	else
		printf("found: %s\n", (char *)item.data);
}
