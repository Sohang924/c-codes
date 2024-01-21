#include<stdio.h>
int main()
{
	int yr;
	printf("Enter the year:\t");
	scanf("%d",&yr);
	if (yr%4==0 || yr%400 == 0 && yr%100 != 0)
	{
		printf("Its a leap year!!!");
	}
	else
	{
		printf("Its not a leap year!!!");
	}
	return 0;
}
