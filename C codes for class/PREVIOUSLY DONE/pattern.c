#include<stdio.h>
#include<math.h>
int main()
{
	int num,x,len =0,r,result = 0 ;
	printf("Enter the number:\t");
	scanf("%d",&num);
	x = num;
	while(x != 0)
	{
		x = x/10;
		len ++;
	}
	x = num;
	while(x != 0)
	{
		r = x%10;
		result = result + pow(r,len);
		x = x/10;
	}
	if(num == result)
	{
		printf("\nIts an armstrong number");
	}
	else
	{
		printf("\nIts not an armstrong number");
	}
	return 0;
}

	
