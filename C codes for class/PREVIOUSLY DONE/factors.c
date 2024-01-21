#include<stdio.h>
int main()
{
	int a, i = 1;
	printf("enter the number:\t");
	scanf("%d",&a);
	while(i<=a)
	{
		if(a%i == 0)
		{
			printf("\n%d",i);
		}
		i++;
	}
	return 0;
}
