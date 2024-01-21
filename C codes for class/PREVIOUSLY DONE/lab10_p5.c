#include<stdio.h>
int main()
{
	int n,max=0;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int array[n];
	for (int i = 0; i<n;i++)
	{
		printf("Enter the number: ");
		scanf("%d",&array[i]);
	}
	for (int i= 0; i<n; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
		}
	}
	printf("The max value is: %d",max);
	return 0;
}


