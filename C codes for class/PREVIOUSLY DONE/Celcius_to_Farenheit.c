#include<stdio.h>
int main()
{
	double c, f;
	printf("Enter the temperature in centigrade:\t");
	scanf("%lf",c);
	f = (c*(9.0/5.0))+32.0;
	printf("Farenheit:\t%lf",f);
	return 0;
}
