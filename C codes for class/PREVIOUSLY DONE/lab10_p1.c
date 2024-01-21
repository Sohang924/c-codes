#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int array[n];
	for (int i = 0; i<n; i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d",&array[i]);
	}
	for (int i = 0; i<n;i++)
	{
		printf("\t%d",array[i]);
	}
	return 0;
}
