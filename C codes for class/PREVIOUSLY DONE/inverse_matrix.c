#include<stdio.h>
int main()
{
	int n,m,s=0;
	printf("Enter the value of rows and columns: ");
	scanf("%d%d",&n,&m);
	int identity[n][m];
	if (m == n)
	{
		for (int i = 0; i<n; i++)
		{
			for (int j = 0; j<m ; j++)
			{
				printf("Enter the values: ");
				scanf("%d",&identity[n][m]);
			}
		}
		for (int i = 0; i<n ; i++)
		{
			for (int j = 0; j<m; j++)
			{
				if((i==j && identity[i][j] == 1) && (i!=j && identity[i][j] == 0))
				{
					s = s+1;
				}
			}
		}
		if(s!=0)
		{
			printf("Its an identity matrix");
		}
		else
		{
			printf("Its not an identity matrix");
		}
	}
	else
	{
		printf("Its not a  square matrix");
	}
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			printf("%d",identity[i][j]);
		}
		printf("\n");
	}
	return 0;
}
