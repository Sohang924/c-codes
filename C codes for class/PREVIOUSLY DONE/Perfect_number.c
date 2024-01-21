#include<stdio.h>
int main()
{
	int n,a=0;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i == 0)
		{
			a = a+i;
		}
	}
	if(a==n)
	{
		printf("Its a perfect number");
	}
	else
	{
		printf("Its not a perfent number");
	}
	return 0;
}	
