#include<stdio.h>
int main()
{
	float h,b,ar;
	printf("Enter the height and base of the triangle respectively:\t");
	scanf("%f%f",&h,&b);
	ar = (0.5)*(h)*(b);
	printf("\nThe area of the triangle is:\t%f",ar);
	return 0;
}
