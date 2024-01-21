#include<stdio.h>
int main()
{
	int n;
	printf("Enter the upperlimit:\t");
	scanf("%d",&n);
	do
	{
		printf("\n%d",n);
		n--;
	}while(n>0);
	return 0;
}

