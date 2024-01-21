//POINTERS

//WAP to multiply two numbers using pointers
/*
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Give the values: ");
    scanf("%d%d",&n1,&n2);
    printf("\nThe product: %d",(*&n1)*(*&n2));
    return 0;
}
*/
//WAP to swap two numbers using call by reference.
/*
#include<stdio.h>
void swap(int *, int *);
int main()
{
    int n1,n2;
    printf("Provide the values for n1 and n2: ");
    scanf("%d%d",&n1,&n2);
    swap(&n1,&n2);
    printf("\nvalues of\nn1 = %d\nn2 = %d",n1,n2);
    return 0;
}
void swap(int *n1,int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    //printf("\nvalues of\nn1 = %d\nn2 = %d",*n1,*n2);
}
*/
//WAP to compute the sum of all elements in an array using pointer
/*
#include<stdio.h>
int sum_arr(int [], int);
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The sum of the elements are: %d",sum_arr(arr,n));
    return 0;
}
int sum_arr(int arr[], int n)
{
    int sum = 0;
    int *ptr = arr;
    for (int i = 0; i<n; i++)
    {
        sum += *ptr;
        ptr++;
        //printf("%d",*ptr);
    }
    return sum;
}
*/
//WAP to print a string in reverse using a pointer.

#include<stdio.h>
#include<string.h>
void reverse(char *,int);
int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%s",&s);
    int l = strlen(s);
    char *ptr = s+l-1;

    //printf("%c\n",*ptr);
    reverse(ptr,l);
    return 0;
}
void reverse(char *ptr,int l)
{
    for (int i = 0; i<l; i++)
    {
        printf("%c",*ptr);
        ptr--;
    }
}


//WAP to count vowels and consonants in a string using pointer.
/*
#include <stdio.h>

int main() {
  char str[100];
  int vowels = 0;
  int consonants = 0;
  char *ptr = str;

  printf("Enter the string: ");
  scanf("%s", str);

  while (*ptr != '\0') {
    if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' || *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
      vowels++;
    } else if ((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z')) {
      consonants++;
    }
    ptr++;
  }

  printf("Number of vowels: %d\n", vowels);
  printf("Number of consonants: %d\n", consonants);

  return 0;
}
*/

//WAP to sort an array using Pointer.
/*
#include <stdio.h>
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
void sortArray(int *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        swap(&arr[i], &arr[j]);
      }
    }
  }
}
void printArray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}
int main() {
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d", &n);

  int arr[n];
  printf("Enter the array elements: ");

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  sortArray(arr, n);
  printf("Sorted array: ");
  printArray(arr, n);

  return 0;
}
*/
//WAP to compute the sum of all elements in an array using dynamic memory allocation.
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum =0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(int));// size of one int...
    for (int i = 0; i<n; i++)
    {
        scanf("%d",ptr+i);
    }
    //for (int i = 0; i<n; i++)
    //{
    //    printf("%d ",*(ptr+i));  //*(ptr+i) = &ptr[i];
    //}
    for (int i = 0; i<n; i++)
    {
        sum += *(ptr + i);
    }
    printf("The sum is : %d",sum);
    return 0;
}
*/
//WAP to find the largest element stored in an array of n elements by using dynamic memory allocation.
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,max;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    for (int i = 0; i<n; i++)
    {
        scanf("%d",ptr+i);
    }
    int p = *ptr;
    for (int i = 1;i<n;i++)
    {
        if (p<*(ptr+i))
        {
            p = *(ptr+i);
            max = p;
        }

    }
    printf("max is: %d",max);
    free(ptr);
    return 0;
}
*/
/*Dynamically allocate the size of an array using calloc,
insert elements into the array, then print the elements.
Change the size of the array, get the new elements and print the array.
Finally free the memory.*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,max,m;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    for (int i = 0; i<n; i++)
    {
        scanf("%d",ptr+i);
    }
    for (int i = 0; i<n; i++)
    {
        printf("%d ",*(ptr+i));  //*(ptr+i) = &ptr[i];
    }
    printf("Enter the number of elements: ");
    scanf("%d",&m);
    ptr= (int *)realloc(ptr,sizeof(int)*m);
    for (int i = n; i<m; i++)
    {
        scanf("%d",ptr+i);
    }
    for (int i = 0; i<m; i++)
    {
        printf("%d ",*(ptr+i));  //*(ptr+i) = &ptr[i];
    }
    //free(ptr);
    return 0;
}
*/
