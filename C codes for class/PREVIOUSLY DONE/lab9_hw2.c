#include<stdio.h>
int main()
{
	int r;
	printf("Enter the rows: ");
	scanf("%d",&r);
	for (int i = 1;i<=r;i++)
	{
		for (int j = i; j>=1;j--)
		{
			printf("%c",j+64);
		}
		printf("\n");
	}
	return 0;
}
