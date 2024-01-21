//WAP to add two numbers entered through the keyboard by using a suitable user defined function.
/*
#include<stdio.h>
int sum(int,int);
int main()
{
    int n1,n2;
    printf("Enter the numbers: ");
    scanf("%d%d",&n1,&n2);
    printf("sum is : %d",sum(n1,n2));
    return 0;
}
int sum(int n1,int n2)
{
    int sum;
    sum = n1+n2;
    return (sum);
}
*/
//WAP to find the factorial of a number n by using a suitable user defined function.
/*
#include<stdio.h>
int factorial(int);
int main()
{
  int n ;
  printf("\nEnter the number: ");
  scanf("%d",&n);
  printf("\nThe factorial is : %d",factorial(n));
  return 0;
}
int factorial(int n)
{
    int f=1;
    for (int i = 1; i<=n;i++)
    {
        f = f*i;
    }
    return(f);
}
*/
/*A Fibonacci sequence is defined as follows: the first and second terms in the sequence are 0 and 1.
Subsequent terms are found by adding the preceding two terms in the sequence (Fi = Fi-1 + Fi-2).
WAP to find out the value of nth term of the Fibonacci sequence by writing a suitable user defined function.*/
/*
#include<stdio.h>
int fibonacci(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The %d th term of fibonacci series is: %d",n,fibonacci(n));
    return 0;
}
int fibonacci(int n)
{
    int a1 = 0,a2 = 1,a3 = a1+a2; // declaration of 1st 3 terms;
    for (int i = 4; i<=n; i++)
    {
        a1 = a2;
        a2 = a3;
        a3 = a1+a2;
    }
    return (a3);
}
*/
/*Write a C program to determine whether a number is prime or not using a function named as “PRIME”.*/
/*
#include<stdio.h>
int prime(int);
int main()
{
    int(n);
    printf("Enter the number: ");
    scanf("%d",&n);
    if (prime(n) == 1)
    {
        printf("Its a prime number");
    }
    else
    {
        printf("Its not a prime number");
    }
    return 0;
}
int prime(int n)
{
    int s = 0;
    for (int i=1;i<n;i++)
    {
        if(n%i == 0)
        {
            s++;
        }
    }
    return (s);
}
*/
/*Write a C program to perform swapping of two integers using a function SWAP.*/
/*
#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("Enter the value of A and B: ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("the swapped numbers: \nA = %d\tB = %d",a,b);
}
*/

//HOMEWORK

//WAP to test whether a number entered through the keyboard is a number in the Fibonacci sequence or not.
/*
#include<stdio.h>
void CheckFibonacci(int);
int main()
{
    int n;
    printf("Enter the element: ");
    scanf("%d",&n);
    CheckFibonacci(n);
    return 0;
}
void CheckFibonacci(int n)
{
    int s = 0;
    int a1 = 0,a2 = 1,a3 = a1+a2; // declaration of 1st 3 terms;
    for (int i = 4; i<=n; i++)
    {
        a1 = a2;
        a2 = a3;
        a3 = a1+a2;
    }

    if (n == a3||n == a1||n == a2)
    {
        printf("\nThe number is in Fibonacci series");
    }
    else
    {
        printf("\nThe number is NOT in Fibonacci series");
    }
}
*/
/*WAP by designing a recursive function to calculate the sum of the digits
of any given integer until it becomes a single digit number using function.*/
/*
#include<stdio.h>
int recfun(int);
int main()
{
    int n, sumtotal = 0, r;
    printf("Enter the number: ");
    scanf("%d",&n);
    while (n>0)
    {
        sumtotal = sumtotal + recfun(n);
        n = recfun(n);
        n = n/10;
        printf("\n%d",n);
        printf("\n%d",recfun(n));
    }
    printf("The answer is %d",sumtotal);
    return 0;
}
int recfun(int n)
{
    int sum = 0,r;
    while(n>0)
    {
        r = n%10;
        sum = sum + r;
        n = n/10;
    }
    return sum;
}
*/
/*WAP to print all prime numbers between 1 to 100 using function.*/
/*
#include<stdio.h>
int prime(int);
int main()
{
    int ul,ll;
    printf("Enter the lower limit an upper limit: ");
    scanf("%d%d",&ll,&ul);
    printf("The prime numbers in the range ");
    for (int i = ll;i<=ul; i++)
    {
        if (prime (i) != 0)
        {
            printf("%d ",prime(i));
        }
    }


    return 0;
}
int prime(int n)
{
    int s = 0;
    for (int i = 2; i<n ; i++)
    {
        if (n%i == 0)
        {
            s++;
        }
    }
    if (s == 0)
    {
        return n;
    }
    else
    {
        return 0;
    }
}
*/

//Write a function that will return the counting of Zeros in a Positive Integer
/*
#include<stdio.h>
int zeros(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("\nThe number of zeros are: %d",zeros(n));
    return 0;
}
int zeros(int n)
{
    int s = 0,r;
    while(n>0)
    {
        r = n%10;
        if (r == 0)
        {
            s++;
        }
        n = n/10;
    }
    return s;
}
*/

//WAP to test whether a number n is palindrome number or not.
/*
#include<stdio.h>
void palindrome(int);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    palindrome(n);
    return 0;
}
void palindrome(int n)
{
    int s = 0,r,o = n;
    while(n>0)
    {
        r = n%10;
        s = (s*10) + (r);
        n = n/10;
    }
    n = o;
    if (s == n)
    {
        printf("\nIts a palindrome number");
    }
    else
    {
        printf("\nIts not a palindrome number");
    }
}
*/
