#include<stdio.h>
int main()
{
	int a = 50;
	int i = 1;
	do
	{
		if(i%2 == 0)
		{
			printf("\n%d",i);
		}
		i++;
	}while(i<=a);
	return 0 ;
}


