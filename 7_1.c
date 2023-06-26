#include <stdio.h>
#define d 365
#define t 24
#define m 60
#define s 60

int main(void)
{
	long int sec;
	sec=d*t*m*s;
	printf("1year= %ld sec\n",sec);
}
