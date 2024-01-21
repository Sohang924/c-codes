#include<stdio.h>
int main()
{
	int a;
	printf("Enter the limit:\t");
	scanf("%d",&a);
	int i = 1;
	while (i<=a)
	{
		printf("\n%d",i);
		i++;
	}
	return 0;
}
