#include<stdio.h>
int main()
{
	int i = 10;
	int a,b = 0;
	while (i>0)
	{
		printf("\nEnter the number:\t");
		scanf("%d",&a);
		b = a+b;
		i--;
	}
	printf("\nThe sum is %d",b);
	printf("\nThe average is %d",b/10);
	return 0;
}

