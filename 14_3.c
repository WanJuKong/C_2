#include <stdio.h>
#include <time.h>
int main(void)
{
	time_t time_now;
	struct tm *tm;
	time(&time_now);
	tm=localtime(&time_now);
	printf("%02d/%02d/%04d %02d:%02d:%02d\n", tm->tm_mon+1, tm->tm_mday, tm->tm_year +1900, tm->tm_hour, tm->tm_min, tm->tm_sec);
}
