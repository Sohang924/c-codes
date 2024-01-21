#include<stdio.h>
int main()
{
	int sec,min,hr;
	printf("Enter the Second:\t");
	scanf("%d",&sec);
	min = sec/60;
	sec = sec%60;
	hr = min/60;
	min = min%60;
	printf("Hour: %d , Minute: %d, Second: %d",hr,min,sec);
	return 0;
}
	

