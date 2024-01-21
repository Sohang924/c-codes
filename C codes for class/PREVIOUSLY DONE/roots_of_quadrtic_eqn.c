#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter the value a,b,c in ax^2+bx+c:\t");
	scanf("%d%d%d",&a,&b,&c);
	d = pow(b,2) - 4*a*c;
	if ( d<0)
	{
		printf("roots are imaginary");
	}
	else if (

