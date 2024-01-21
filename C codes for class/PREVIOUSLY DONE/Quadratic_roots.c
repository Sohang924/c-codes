#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,e,f,r,i;
	printf("Enter the value of a,b,c in ax^2+bx+c:\t");
	scanf("%lf%lf%lf",&a,&b,&c);
	d = (b*b) - 4*a*c;
	if (d<0)
	{
		printf("\nThe roots are imaginary");
		r = -(b)/(2*a);
		i = sqrt(-d)/(2*a);
		printf("\nThe roots are:");
		printf("\n %.2lf + %.2lfi",r,i);
		printf("\n %.2lf - %.2lfi",r,i);
	}
	else if(d == 0)
	{
		printf("\nThe roots are real and equal");
		e = (-b + sqrt(d))/(2*a);
		printf("\nThe roots are:%.2lf and %.2lf",e,e);
	}
	else
	{
		printf("\nThe roots are real and unequal");
		e = (-b +sqrt(d))/(2*a);
		f = (-b -sqrt(d))/(2*a);
		printf("\n The roots are: %.2lf and %.2lf",e,f);
	}
	return 0;
}
