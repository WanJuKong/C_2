#include <stdio.h>
int main(void)
{
	FILE *ifp, *ofp;
	int ch;
	ifp=fopen("source", "r");
	ofp=fopen("result","w");
	while((ch=fgetc(ifp))!=EOF)
		fputc(ch, ofp);
	fclose(ifp);
	fclose(ofp);
}
