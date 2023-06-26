#include <stdio.h>
int main(void)
{
	FILE *fp;
	int i;
	float j;
	char *str;
	fp = fopen("data", "w");
	fprintf(fp, "%d %g, %s\n", 123, 12.345, "hi");
	fclose(fp);
	fp=fopen("data", "r");
	fscanf(fp, "%d%g%s\n", &i, &j, str);
	printf("%d %g %s\n", i, j, str);
	fclose(fp);
}
