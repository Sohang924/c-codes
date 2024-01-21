//Write a C program to determine the sum of elements of a 2-D array using a function ELESUM.
/*
#include<stdio.h>
int n,m;
int ELESUM(int [n][m]);
int main()
{
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            printf("Enter the value: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("%d", ELESUM(arr));
    return 0;
}
int ELESUM(int arr[n][m])
{
    int sum = 0;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            sum  += arr[i][j];
        }
    }
    return sum;
}

/*Write a C program to determine the sum of main diagonal elements of a
2-D array of size 3x3 using a function SUMDIAGONAL.*/
/*
#include<stdio.h>
int n,m;
int  sumdiagonal(int [][100]);
int main()
{
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);
    int arr[100][100];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            printf("Enter the value: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("%d", sumdiagonal(arr));
    return 0;
}
int sumdiagonal(int arr[][100])
{
    int sum = 0;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            if (i == j)
            {
                sum  += arr[i][j];
            }
        }
    }
    return sum;
}
*/
/*Write a C program to determine the largest and smallest element of a 2-D array.
Use functions LARGEST and SMALLEST for the given purpose.*/
/*
#include<stdio.h>
int n,m;
int largest(int [][100]);
int smallest(int [][100]);
int main()
{
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);
    int arr[100][100];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            printf("Enter the value: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n the largest number: %d \n the smallest number:%d", largest(arr),smallest(arr));
    printf("\n the smallest number:%d",smallest(arr));
    return 0;
}
int largest(int arr[][100])
{
    int max = arr[0][1];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}
int smallest(int arr[][100])
{
    int min = arr[0][1];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    return min;
}
*/
/*Write a C program to find the sum of only PRIME values in a 2-D array using a function PRIMESUM.*/
/*
#include<stdio.h>
int n,m;
int primesum(int [][100]);
int prime(int);
int main()
{
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&n,&m);
    int arr[100][100];
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            printf("Enter the value: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("%d", primesum(arr));
    return 0;
}
int prime(int n)
{
    int s =0;
    for (int i =2; i<n; i++)
    {
        if (n%i == 0)
        {
            s++;
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
}
int primesum(int arr[][100])
{
    int sum = 0;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j<m; j++)
        {
            sum = sum +prime(arr[i][j]);
        }
    }
    return sum;
}
*/
//Write a C program to perform addition of two matrices and display the result using 3rd matrix. Use a function ADDMATRIX
/*
#include<stdio.h>
int n1,m1,n2,m2;
void addmatrix(int[][100],int[][100]);
int main()
{
    printf("For the 1st matrix");
    printf("\nEnter the number of rows and columns: ");
    scanf("%d%d",&n1,&m1);
    int arr1[100][100];
    for (int i = 0; i<n1; i++)
    {
        for (int j = 0; j<m1; j++)
        {
            printf("Enter the value: ");
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nFor the 2nd matrix");
    printf("\nEnter the number of rows and columns: ");
    scanf("%d%d",&n2,&m2);
    int arr2[100][100];
    for (int i = 0; i<n2; i++)
    {
        for (int j = 0; j<m2; j++)
        {
            printf("Enter the value: ");
            scanf("%d",&arr2[i][j]);
        }
    }
    if (n1 == n2 && m1 == m2)
    {
        addmatrix(arr1,arr2);
    }
    else
    {
        printf("Number of rows/columns entered are not equal");
    }
    return 0;
}
void addmatrix(int arr1[][100],int arr2[][100])
{
    int arr3[n1][m1];
    for (int i = 0; i<n1; i++)
    {
        for (int j = 0;j<m1; j++)
        {
            arr3[i][j] = arr1[i][j]+arr2[i][j];
        }
    }
    for (int i = 0; i<n1; i++)
    {
        for (int j = 0;j<m1; j++)
        {
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}
*/
(*s1).number = 10;
