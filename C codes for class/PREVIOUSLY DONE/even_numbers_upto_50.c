#include<stdio.h>
int main()
{
	int a;
	printf("Enter the limit:\t");
	scanf("%d",&a);
	for(int i=1;i<=a+1;i++)
	{
		if (i%2 == 0)
		{
			printf("\n%d",i);
		}
	}
	return 0;
}
