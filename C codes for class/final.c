/*
#include<stdio.h>
int main()
{
    int length = 0;
    char a[100];
    printf("Enter the string: ");
    scanf("%s",&a);
    for (int i = 0; a[i]!='\0'; i++)
    {
        length++;
    }
    printf("\nlength is %d",length);
    return 0;
}

*//*
#include<stdio.h>
int fibonacci(int, int, int, int);
int main()
{
    int n,a1,a2,a3,p,ans;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    if (n == 1)
        printf("the nth term is %d",0);
    if (n == 2)
        printf("the nth term is %d",1);
    else
    {
        a1 = 0;
        a2 = 1;
        a3 = a1+a2;
        p = n-3;
        ans = fibonacci(a1,a2,a3,p);
        printf("The nth term is %d",ans);
    }
    return 0;
}
int fibonacci(int a1,int a2,int a3,int p)
{
    if (p == 0)
        return a3;
    else
    {
        a1 = a2;
        a2 = a3;
        a3 = a1+a2;
        fibonacci(a1,a2,a3,p-1);
    }
}
*/
