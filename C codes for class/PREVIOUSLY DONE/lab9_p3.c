#include<stdio.h>
int main()
{
	int r;
	printf("Enter the number of rows: ");
	scanf("%d",&r);
	for (int i = 1; i<=r; i++)
	{
		for (int j = 1; j<=r; j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
