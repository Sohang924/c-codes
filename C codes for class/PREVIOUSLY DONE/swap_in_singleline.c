# include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the variales:\t");
	scanf("%d%d",&a,&b);
	a = (a+b)-(b = a);
	printf("First variable:%d",a);
	printf("Second variable:%d",b);
	return 0;
}

