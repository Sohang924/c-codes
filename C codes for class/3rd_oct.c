     //WAP to design a user defined function to calculate the sum of the elements of an integer 1-D array.
/*
#include<stdio.h>
int n;
int takeElements(int []);
int main()
{
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n; i++)
    {
        printf("Enter: ");
        scanf("%d",&a[i]);
    }
    printf("The sum is:%d",takeElements(a));
    return 0;
}
int takeElements(int a[])
{
    int s = 0;
    for (int i = 0; i<n;i++)
    {
        s = s+a[i];
    }
    return s;
}
*/
//WAP to sort the elements of an 1-D array in ascending order by using a suitable user defined function for sort operation.
/*
#include<stdio.h>
int n;
void ascending(int[]);
int main()
{
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    ascending(a);
    return 0;
}
void ascending(int a[])
{
    int k;
    for (int i = 0; i<n; i++)
    {
        for (int j = i+1; j<n;j++)
        {
            if (a[i]>a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
    printf("\nelements in ascending order");
    for (int i = 0; i<n ; i++)
    {
        printf("\n%d",a[i]);
    }
}
*/
//Write a C program to determine the largest and smallest element of a 1-D array. Use functions LARGEST and SMALLEST for the given purpose.
/*
#include<stdio.h>
int n;
int largest(int []);
int smallest(int []);
int main()
{
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nThe largest element is : %d",largest(a));
    printf("\nThe smallest element is : %d",smallest(a));
    return 0;
}
int largest(int a[])
{
    int max = a[0];
    for(int i = 0; i<n ; i++)
    {
        if (max<a[i])
        {
            max = a[i];
        }
    }
    return max;
}
int smallest(int a[])
{
    int min = a[0];
    for(int i = 0; i<n ; i++)
    {
        if (min>a[i])
        {
            min = a[i];
        }
    }
    return min;
}
*/
//Write a C program to determine the second largest element of a 1-D array of using a function SECLARGEST.
//sort kore second largets term ta likhe rakhte pari
/*
#include<stdio.h>
int n ;
int seclargest(int[]);
int main()
{
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The second largest number is:%d",seclargest(a));
    return 0;
}
int seclargest(int a[])
{
    int k;
    for (int i = 0; i<n; i++)
    {
        for (int j = i;j<n;j++)
        {
            if (a[i]>a[j])
            {
                k = a[i];
                a[i] = a[j];
                a[j] = k;
            }
        }
    }
    return a[n-2];
}
*/
//Write a C program to swap the first and last element of a 1-D array of using a function SWAP.
//try other methods;
/*
#include<stdio.h>
int n;
void swap(int[]);
int main()
{
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    swap(a);
    return 0;
}
void swap(int a[])
{
    int k;
    for (int i = 0; i<n; i++)
    {
        k = a[0];
        a[0] = a[n-1];
        a[n-1] = k;
    }
    for (int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
*/
//Write a C program to swap the largest and smallest element of a 1-D array of using a function SWAP.
/*
#include<stdio.h>
int n;
void swap(int []);
int main()
{
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n; i++)
    {
        printf("Enter: ");
        scanf("%d",&a[i]);
    }
    swap(a);
    return 0;
}
void swap(int a[])
{
    int max = a[0],min = a[0],p,q,k;
    for (int i = 0; i<n;i++)
    {
        if (max <a[i])
        {
            max = a[i];
            p = i;
        }
    }
    for (int i = 0; i<n;i++)
    {
        if (min >a[i])
        {
            min = a[i];
            q = i;
        }
    }
    k = a[p];
    a[p] = a[q];
    a[q] = k;

    for (int i = 0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}
*/
//Write a C program to find the sum of only odd values in a 1-D array using a function ODDSUM.
/*
#include<stdio.h>
int n;
int oddsum(int[]);
int main()
{
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i<n; i++)
    {
        printf("Enter: ");
        scanf("%d",&a[i]);
    }
    printf("The sum of odd number is :%d",oddsum(a));
    return 0;
}
int oddsum(int a[])
{
    int sum = 0;
    for (int i = 0; i<n; i++)
    {
        if (a[i] % 2 != 0)
        {
            sum = sum+a[i];
        }
    }
    return sum;
}
*/
//Write a C program to find the sum of only PRIME values in a 1-D array using a function PRIMESUM.
/*
#include <stdio.h>

int isPrime(int num) {
  if (num <= 1) {
    return 0;
  }

  for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
      return 0;
    }
    else
    {
        return 1;
    }
  }
}

int primesum(int arr[], int n) {
  int sum = 0;

  for (int i = 0; i < n; i++) {
    if (isPrime(arr[i])) {
      sum += arr[i];
    }
  }

  return sum;
}

int main() {
  int arr[] = {2, 3, 4, 5, 7};
  int n = sizeof(arr) / sizeof(arr[0]);

  int sum = primesum(arr, n);
  printf("Sum of prime numbers in the array: %d\n", sum);

  return 0;
}
*/

