#include<stdio.h>
int main()
{
	char lower;
	int l,u;
	printf("\nEnter the character:\t");
	scanf("%c",&lower);
	l = lower;
	if(l>=97 && l<=122)
	{
		u = l - 32;
		printf("\n The required uppercase:\t%c\n",u);
	}
	else if(l>=65 && l<=91)
	{
		printf("\n You entered the uppercase:\t%c\n",l);
	}
	else
	{
		printf("\n Enter the valid output\n");
	}
	return 0;
}

