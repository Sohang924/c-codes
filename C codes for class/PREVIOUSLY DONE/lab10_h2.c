#include<stdio.h>
int main()
{
	 int n,s=0;
	 printf("Enter the number ");
	 scanf("%d",&n);
	 int array[n];
	 for (int i = 0; i<n; i++)
	 {
		 printf("Enter the number: ");
		 scanf("%d",&array[i]);
	 }
	 for (int i = 0; i<n; i++)
	 {
		for (int j = 0; j<n;j++)
		{
			if (array[i] == array[j])
			{
				s++;

			}
		}
	 }
	if (s>5)
	{
		printf("number of duplicates: yes");
	}
	else
	{
		printf("no");
	}
	return 0;

}

