#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum = 1; 
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("%d\t",sum);
	for(int i = 1; i<n ; i++)
	{
		sum = sum + pow(2,i);
		printf("%d\t",sum);
	}
	return 0;
}

