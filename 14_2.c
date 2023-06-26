#include <stdio.h>
#include <time.h>

int main(void)
{
	time_t time_now;
	time(&time_now);
	printf("%s",ctime(&time_now));
}
