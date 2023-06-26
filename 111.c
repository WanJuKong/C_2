#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void setrate(double);
double getrate(void);
double todollar(int);
int towon(double);

double exchange_rate;

int main(int argc, char **args)
{
	int won;
	double dollar;
	printf("1$ exchange rate: ");
	scanf("%lf", &dollar);
	setrate(dollar);
	printf("dollar to won: ");
	scanf("%lf",&dollar);
	printf("%lg$ = %dwon\n",dollar, towon(dollar));
	printf("won to dollar: ");
	scanf("%d", &won);
	printf("%dwon = %lg$\n",won, todollar(won));
}

void setrate(double rate)
{
	exchange_rate=rate;
}

double getrate(void)
{
	return exchange_rate;
}

double todollar(int won)
{
	return won/exchange_rate;
}

int towon(double dollar)
{
	return dollar * exchange_rate;
}
