#include<stdio.h>
int main()
{
	float a,b,c,d,e,avg,percent;
	printf("Enter the marks of the subjects:\t");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	avg  = (a+b+c+d+e)/5;
	printf("\nAverage:\t%f",avg);
	percent = ((a+b+c+d+e)/(200*5))*100;
	printf("\nPercentage:\t%f",percent);
	return 0;
}
