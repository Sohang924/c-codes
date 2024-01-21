#include<stdio.h>
int main()
{
	int n1,m1,n2,m2;
	printf("Enter the number of rows and columns for matrix1: ");
	scanf("%d%d",&n1,&m1);
	printf("Enter the number of rows and columns for matrix2: ");
	scanf("%d%d",&n2,&m2);	
	int a1[n1][m1];
	int a2[n2][m2];
	int a3[m1][n2];
	if(n2 == m1)
	{
		printf("FOR MATRIX 1: \n");
		for (int i = 0; i<n1; i++)
		{
			for (int j = 0; j<m1; j++)
			{
				printf("Enter the elements: ");
				scanf("%d",&a1[i][j]);
			}
		}
		printf("FOR MATRIX 2: \n");
		for (int i = 0; i<n2 ; i++)
		{
			for (int j = 0; j<m2; j++)
			{
				printf("Enter the elements: ");
				scanf("%d",&a2[i][j]);
		}
		for (int i =0; i<n2; i++)
		{
			for(int j = 0; j<m1; j++)
			{
				a3[i][j] = a2[i][j] * a1[i][j];
			}
		}

		for (int i =0 ; i<n2 ; i++)
		{
			for (int j = 0; j<m1 ; j++)
			{
				printf("%d ",&a3[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Wrong!");
	}
	return 0;
}
