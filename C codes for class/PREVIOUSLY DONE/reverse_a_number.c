#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Enter the number:\t");
	scanf("%d",&a);
	b = a%10;
	c = (a/10)%10;
	d = (a/100)%10;
	e = 100*b +10*c +d;
	printf("\nThe number:\t %d \n",e);
	return 0;
}

