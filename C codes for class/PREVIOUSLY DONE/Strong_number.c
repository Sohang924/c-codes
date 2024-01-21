#include<stdio.h>
int main()
{
	int s=0,n,num,r;
	printf("Enter the number: ");
	scanf("%d",&n);
	num = n;
	while(n>0)
	{
		r = n%10;
		for(int i=r-1;i>0;i--)
		{
			r = r*i;
		}
		s = s+r;
		n = n/10;
	}
	if(num == s)
	{
		printf("Its a Strong number");
	}
	else
	{
		printf("Its not a strong number");
	}
	return 0;
}
