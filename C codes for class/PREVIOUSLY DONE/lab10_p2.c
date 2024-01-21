#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the terms: ");
	scanf("%d",&n);
	int array[n];
	for(int i = 0;i<n;i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d",&array[i]);
	}
	for(int i= 0; i<n;i++)
	{
		sum = sum + array[i];
	}
	printf("\n the sum is %d",sum);
	return 0;
}


