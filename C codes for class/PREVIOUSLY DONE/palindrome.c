#include<stdio.h>
int main()
{
	int num, a,r,reverse=0;
	printf("ENter the number:\t");
	scanf("%d",&num);
	a = num;
	while (a>0)
	{
		r  = a%10;
		reverse = reverse*10 +r;
		a = a/10;
	}

	if(num == reverse)
	{
		printf("Its a palindrome number");
	}
	else
	{
		printf("Its not a palindrome number");
	}
	return 0;
}


