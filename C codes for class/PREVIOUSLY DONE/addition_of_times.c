#include<stdio.h>
int main()
{
	int h1,m1,s1,h2,m2,s2,snet,hnet,mnet;
	printf("Enter the first time in hh:mm:ss format:\t");
	scanf("%d%d%d",&h1,&m1,&s1);
	printf("\nEnter the second time in hh:mm:ss format:\t");
	scanf("%d%d%d",&h2,&m2,&s2);
	s1 = h1*60*60 +m1*60 +s1;
	s2 = h2*60*60 +m2*60 +s2;
	snet = s1+s2;
	mnet = snet/60;
	snet = snet%60;
	hnet = mnet/60;
	mnet = mnet%60;
	printf("\nnet time:\t %d:%d:%d \n",hnet,mnet,snet);
	return 0;
}
		
