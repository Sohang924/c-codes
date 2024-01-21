#include<stdio.h>
int main()
{
	int n ,sum = 0;
	int avg;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int array[n];
	for (int i=0;i<n;i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d",&array[i]);
	}
	for (int i= 0; i<n;i++)
	{
		sum = sum+array[i];
		avg = sum/n;
		printf("Average is :%d",avg);
	}
	return 0;
}

