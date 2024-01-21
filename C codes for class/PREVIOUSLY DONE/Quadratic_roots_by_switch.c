#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,e,f,r,i;
	printf("Enter the value o f a, b, c:\t");
	scanf("%f%f%f",&a,&b,&c);
	d = (b*b)-4*a*c;
	switch(d<0)
	{
		case 1:
			printf("Roots are imaginary");
			r = (-b)/(2*a);
			i = sqrt(-d)/(2*a);
			printf("roots are: %.2f + %.2fi and %.2f - %.2fi",r,i,r,i);
			break;
		case 2:
			switch(d ==0)
			{
				case 1:
					printf("Roots are real and equal");
					e = (-b+sqrt(d))/(2*a);
					printf("Roots are: %.2f and %.2f",e,e);
					break;
				case 0:
					printf("Roots are real and unequal");
					e = (-b+sqrt(d))/(2*a);
					f = (-b-sqrt(d))/(2*a);
					printf("Roots are: %.2f and %.2f",e,f);
					break;
			}
			break;
	}
	return 0;
}
				
			

