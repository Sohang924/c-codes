#include<stdio.h>
int main()
{
	int n,e=0,o=0;
	printf("enter the element: ");
	scanf("%d",&n);
	int array[n],even[0],odd[0];
	for (int i = 0; i<n; i++)
	{
		printf("Enter the number: ");
		scanf("%d",&array[i]);
	}
	for (int i=0; i<n;i++)
	{
		if (array[i]%2 == 0)
		{
			even[e] = array[i];
			e++;
		}
		else
		{
			odd[o] = array[i];
			o++;
		}
	}
	printf("\nEVEN NUMBERS:");
	for(int i = 0; i<e; i++)
	{
		printf("%d ",array[i]);
	}
	printf("\nODD NUMBERS: ");
	for(int i = 0; i<o;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}
