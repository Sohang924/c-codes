#include<stdio.h>
int main()
{
	int a ,b = 1;
	printf("Enter the number: ");
	scanf("%d",&a);
	for(int i = (a-1);i>0;i--)
	{
		 a = a*i; 
	}
	printf("The factorial is :%d",a);
	return 0;
}	
