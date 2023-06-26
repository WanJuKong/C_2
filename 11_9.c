#	include <stdio.h>
#define max 1024

int main(void)
{
	FILE *fp;
	char buffer[max];
	int ch, chk=0;
	fp=fopen("source", "r");
	while((ch=fgetc(fp))!=EOF){
		if(ch=='L')
		{
			chk=1;
			break;
		}
	}
	if(chk==1)
	{
		ungetc(ch,fp);
		fgets(buffer, max, fp);
		printf("%s\n", buffer);
	}
	else
		printf("notfound\n");
	fclose(fp);
}	
