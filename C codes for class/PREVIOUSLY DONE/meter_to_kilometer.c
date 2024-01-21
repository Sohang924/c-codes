#include<stdio.h>
int main()
{
	int km, m;
	printf("Enter the distance :\t");
	scanf("%d",&m);
	km = m/1000;
	m = m%1000;
	printf("Kilometer: %d Meter: %d \n",km,m);
	return 0;
}

