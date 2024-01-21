#include<stdio.h>
int main()
{
	char operator;
	int o1,o2;
	printf("Enter the operator:\t");
	scanf("%c",&operator);
	printf("Enter the operands:\t");
	scanf("%d%d",&o1,&o2);
	switch(operator)
	{
		case 'A':
			printf("\nThe sum is:\t%d\n",o1+o2);
			break;
		case 'S':
			printf("\nThe diffrence is:\t%d\n",o1-o2);
			break;
		case 'M':
			printf("\nThe product is:\t%d\n",o1*o2);
			break;
		case 'D':
			printf("\nThe quotient is:\t%d\n",o1/o2);
			break;
		default:
			printf("\nINVALID INPUT!!!");
	}
	return 0;
}
