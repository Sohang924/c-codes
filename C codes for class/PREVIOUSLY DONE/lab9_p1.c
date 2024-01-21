#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0;
	printf("Enter the value: ");
	scanf("%d",&n);
	for (int i = 1;i<=n;i++)
	{
		sum = sum + pow(i,i);
	}
	printf("The sum of series: %d",sum);
	return 0;
}	
