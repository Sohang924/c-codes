//WAP to find the factorial of a number n by writing a recursive function for it.
/*
#include<stdio.h>
int f = 1;
int factorial(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The factorial is %d",factorial(n));
    return 0;
}
int factorial(int n)
{
    if (n!=0)
    {
       f = f*n;
       factorial(n-1);
    }
    return f;
}
*/
//WAP to calculate GCD/HCF of two numbers by using a recursive function.
/*
#include<stdio.h>
int hcf(int,int);
int main()
{
  int n,m;
  printf("Enter the numbers: ");
  scanf("%d%d",&n,&m);
  printf("\n The hcf is : %d",hcf(n,m));
  return 0;
}
int hcf(int n,int m)
{
    if(m == 0)
    {
        return n;
    }
    else
    {
        return hcf(m,n%m);
    }
}
*/

//WAP by designing a recursive function to calculate the sum of the digits of any given integer until it becomes a single digit number
/*
#include<stdio.h>
int recfun(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d",recfun(n));
    return 0;
}
int recfun(int n)
{
    int sum = 0,r,s =0;
    while(n>0)
    {
        r = n%10;
        s = s+r;
        n = n/10;
    }
    if ((s/10)>0)
    {
        recfun(s);
    }
    else
    {
        return s;
    }
}
*/
//Write a recursive function to add the digits of a positive integer.
/*
#include<stdio.h>
int adddigits(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The sum of the digits: %d",adddigits(n));
    return 0;
}
int adddigits(int n)
{
    int s=0,r;
    if (n == 0)
    {
        return 0;
    }
    else
    {
       s = (n%10) + adddigits(n/10);
       return s;
    }
}
*/
//WAP to find out the maximum element of an integer array by using recursion.
/*
#include <stdio.h>
int n;
int maxElement(int [], int);
int main()
{
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = maxElement(arr, n);
    printf("The maximum element is %d\n", max);
    return 0;
}
int maxElement(int arr[], int n)
{
  if (n == 1)
  {
    return arr[0];
  }
  else
  {
    int max = maxElement(arr, n - 1);
    if (arr[n - 1] > max)
    {
      return arr[n - 1];
    } else {
      return max;
    }
  }
}
*/
//WAP to count number of digits of a positive integer n by using a recursive function.
/*
#include<stdio.h>
int count(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The number of digits: %d",count(n));
    return 0;
}
int count(int n)
{
    int s=0;
    if (n>0)
    {
       s++;
       count(n/10);
       return s;
    }
}
*/
