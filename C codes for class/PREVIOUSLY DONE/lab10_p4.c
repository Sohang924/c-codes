#include<stdio.h>
int main()
{
	int n,a,p;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	int array[n];
	for (int i= 0;i<n; i++)
	{
		printf("Enter the number: ");
		scanf("%d",&array[i]);
	}
	printf("Enter the number to be inserted: ");
	scanf("%d",&a);
	printf("Enter the position: ");
	scanf("%d",&p);
	array[p-1] = a;
	for (int i= 0; i<n; i++)
	{
		printf("\t%d",array[i]);
	}
	return 0;
}


