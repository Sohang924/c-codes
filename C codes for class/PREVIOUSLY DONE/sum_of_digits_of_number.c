#include<stdio.h>
int main()
{
	int n,r,s=0;
	printf("Enter the number:\t");
	scanf("%d",&n);
	while(n>=0)
	{
		n = r%10;
		s = s+r;
	        n = n/10;
	}
	printf("\nThe sum is:\t%d",s);
	return 0;
}
