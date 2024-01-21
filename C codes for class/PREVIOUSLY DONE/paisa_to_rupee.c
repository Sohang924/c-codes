#include<stdio.h>
int main()
{
	int paisa, rupees;
	printf("Enter the rupees:\t");
	scanf("%d",&paisa);
	rupees = paisa/100;
	paisa = paisa%100;
	printf("Rupee: %d and paisa: %d",rupees,paisa);
	return 0;
}
