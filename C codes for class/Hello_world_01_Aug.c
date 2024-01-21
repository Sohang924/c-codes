#include<stdio.h>

int main()
{
    int h1,h2,m1,m2,s1,s2;
    char c;
    printf("Enter time 1:\t");
    scanf("%d%d%%d%",&h1,&m1,&s1);
    printf("Enter time 2:\t");
    scanf("%d%d%d%",&h2,&m2,&s2);
    printf("\n%d%d%d%d%d%d",h1,m1,s1,h2,m2,s2);
    return 0;
}
