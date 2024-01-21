#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter the row and column: ");
	scanf("%d%d",&m,&n);
	int matrix1[n][m],matrix2[n][m],result[n][m];
	for (int i ; i<n; i++)
	{
		for ( int j = 0; j<m; j++)
		{
			printf("Enter the element for first matrix: ");
			scanf("%d",&matrix1[i][j]);
			printf("Enter the element for second matrix: ");
			scanf("%d",&matrix2[i][j]);
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	for (int i=0; i<n; i++)
	{
		for(int j = 0; j<m; j++)
		{
			printf("sum of matrices: ",result[i][j]);
		}
	}
	return 0;
}
