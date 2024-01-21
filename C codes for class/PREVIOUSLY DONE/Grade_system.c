#include<stdio.h>
int main()
{
	int m;
	char g;
	printf("Enter the marks:\t");
	scanf("%d",&m);
	if(m>=90 && m<=100)
	{
		g = 'O';
	}
	else if(m>=80 && m<90)
	{
		g = 'E';
	}
	else if(m>=70 && m<80)
	{
		g = 'A';
	}
	else if(m>=60 && m<70)
	{
		g = 'B';
	}
	else if(m>=50 && m<60)
	{
		g = 'C';
	}
	else if(m>=40 && m<50)
	{
		g = 'D';
	}
	else if(m>=0 && m<40)
	{
		g = 'F';
	}
	else
	{
		printf("Enter a valid input!!!");
	}
	printf("CONGRATULATIONS!! , You have got a %c grade",g);
	return 0;
}

