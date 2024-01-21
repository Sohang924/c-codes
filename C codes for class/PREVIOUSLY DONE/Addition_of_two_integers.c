#include<stdio.h>
int main()
{
	int a, b, sum;
	printf("Enter the numbers:\t");
	scanf("%d%d",&a,&b);
	sum = a+b;
	//printf("The summation of the number entered:\t%d\n",sum);
	printf("The summation of the number entered:\t%d\n",a+b);
	return 0;
}
