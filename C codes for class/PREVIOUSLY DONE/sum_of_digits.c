#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter the number:\t");
	scanf("%d",&a);
	b = a%10;
	c = (a/10)%10;
	d = (a/100)%10;
	printf("\n The sum of digits is:\t %d \n",b +d +c);
	return 0;
}
