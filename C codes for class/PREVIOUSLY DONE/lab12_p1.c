#include<stdio.h>
int main()
{
	int n,m;
	printf("Enter number of cities and days: ");
	scanf("%d%d",&n,&m);
	int array[n][m];
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m ; j++)
		{
			printf("Enter the temperature: ");
			scanf("%d",&array[i][j]);
		}
	}
	for (int i = 0; i<n; i++)
	{
		for ( int j = 0; j<m; j++)
		{
			printf("\nCity %d : temp = %d",i+1,array[i][j]);
		}
	}
	return 0;
}

