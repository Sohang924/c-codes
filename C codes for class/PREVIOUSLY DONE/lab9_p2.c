#include<stdio.h>
#include<math.h>

int main()
{
	float n, sum = 0;
	printf("Enter the no. of terms: ");
	scanf("%f",&n);
	for (float i = 1; i<=n;i++)
	{
		sum = sum + sqrt(i);
	}
	printf("The sum is: %f",sum);
	return 0;
}
