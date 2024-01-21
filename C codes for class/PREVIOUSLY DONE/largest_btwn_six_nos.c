#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,max;
	printf("\nEnter the numbers:\t");
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	max = a;
	if (b>max)
	{
		max = b;
	}
	if (c>max)
	{
		max = c;
	}
	if (d>max)
	{
		max = d;
	}
	if(e>max)
	{
		max = e;
	}
	if (f>max)
	{
		max = f;
	}
	printf("\n The largest number is %d \n",max);
	return 0;
}
