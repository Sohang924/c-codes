#include<stdio.h>
int main()
{
	int r;
	printf("Enter the rows: ");
	scanf("%d",&r);
	for (int i = r; i>0; i--)
	{
		for (int j = (r-1)*(r-1);j>0;j--)
		{
			if (j>=((r+1)-i)&&j<=((r-1)+i))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

