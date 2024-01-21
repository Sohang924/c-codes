#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of elements: ");
	scanf("%d",&n);
	int array[n];
	for (int i = 0;i<n; i++)
	{
		printf("Enter the number of elements: ");
		scanf("%d",&array[i]);
	}
	printf("\nunique numbers are:\n");
	for (int i =0; i<n; i++)
	{
		int k = 0;
		for (int j =i+1; j<n;j++)
		{
			if(i!=j)
			{
			if (array[i] == array[j])
			{
				k++;
			}
			}
		}
		if(k == 0)
		{
			printf("\t%d",array[i]);
		}

	}
	return 0;
}

