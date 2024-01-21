#include<stdio.h>
int main()
{
	int term1 =0, term2=1,term3,terms;
	printf("Enter the number of terms: ");
	scanf("%d",&terms);
	term3 = term1 +term2;
	printf("%d\t%d",term1,term2);
	for(int i = 3; i<=terms;i++)
	{
		printf("\t%d",term3);
		term1 = term2;
		term2 = term3;
		term3 = term1 + term2;
	}
	return 0;
}

