#include<stdio.h>
int main()
{
	int r;
	printf("Enter the rows: ");
	scanf("%d",&r);
	for (int i = 1; i<=r;i++)
	{
		for (int j= 1;j<=(r-1)*(r-1);j++)
		{
			if(j>=((r+1)-i)&&j<=((r-1)+i))
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
