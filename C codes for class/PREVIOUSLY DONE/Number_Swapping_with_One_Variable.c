#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter num1:\t");
	scanf("%d",&a);
	printf("Enter num2:\t");
	scanf("%d",&b);
	printf("\nNumber swaped!!\n");
	a = a+b;
	b = a-b;
	a = a-b;
	printf("\nNum1%d",a);
	printf("\nNum2%d",b);
	return 0;
}
