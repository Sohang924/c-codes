#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	printf("Enter the number:\t");
	scanf("%d",&a);
	b = a%10; //last digit
	c = (int)log10(a);
	d = a/(pow(10,c));
	printf("\nThe required output is:\t %d \n",b+d);
	return 0;
	//for math module to compile here: gcc filename.c -lm
}

