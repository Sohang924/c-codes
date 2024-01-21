#include<stdio.h>
int main()
{
	int marks,m;
	char g;
	printf("Enter the marks:\t");
	scanf("%d",&marks);
	m = marks/10;
	switch(m)
	{
		case 9:
			g = 'O';
			break;
		case 8:
			g = 'E';
			break;
		case 7:
			g = 'A';
			break;
		case 6:
			g = 'B';
			break;
		case 5:
			g = 'C';
			break;
		case 4:
			g = 'D';
			break;
		case 3:
		case 2:
		case 1:
		case 0:
			g = 'F';
			break;
		default:
			printf("WRONG INPUT!!!");
	}
	printf("CONGRATULATION! you have got %c\n",g);
	return 0;
}
