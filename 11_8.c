#include <stdio.h>
#define max 1024
int main(void)
{
	FILE *ifp, *ofp;
	char buffer [max];
	int num;
	ifp=fopen("source", "r");
	ofp=fopen("result", "w");
	num =fread(buffer, 1, max, ifp);
	fwrite(buffer, 1, num, ofp);
	fclose(ifp);
	fclose(ofp);
}
