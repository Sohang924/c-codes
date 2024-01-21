#include<stdio.h>
int main()
{
	int n,s,p;
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	int array[n];
	for (int i = 0; i<=n; i++)
	{
		printf("Enter the number: ");
		scanf("%d",&array[i]);
	}
	printf("Enter the number you want to search ");
	scanf("%d",&s);
	for( int i = 0; i<n; i++)
	{
		if (array[i] == s)
		{
			s = 1;
			p = i;
		}
	}
	if (s == 1)
	{
		printf("NUmber found in index %d",p);
	}
	else
	{
		printf("NUmber not found!");
	}
	return 0;
}


