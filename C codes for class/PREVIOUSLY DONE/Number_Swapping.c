#include<stdio.h>
int main()
{
	int a, b, c;
	printf("Enter num1:\t");
	scanf("%d",&a);
	printf("Enter num2:\t");
	scanf("%d",&b);
	printf("\nBefore swapping:\n");
	printf("\nnum1=%d",a);
	printf("\nnum2=%d",b);
	printf("\nAfter swapping:\n");
	c = a;
	a = b;
	printf("\nnum1 = %d",a);
	printf("\nnum2 = %d",c);
	return 0;
}

