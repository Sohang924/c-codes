#include<stdio.h>
int main()
{
	int n,r=0 ;
	printf("Enter the number of elemnets: ");
	scanf("%d",&n);
	int array[n],reverse[r];
	for (int i = 0; i<n; i++)
	{
		printf("Enter the element: ");
		scanf("%d",&array[i]);
	}
	while(n >0)
	{
		reverse[r] = array[n];
		n--;
		r++;
	}
	for(int i = 0; i<r; i++)
	{
		printf("%d",reverse[i]);
	}
	return 0;
}	
