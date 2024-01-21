//kiit codes!!!!

//WAP to find the largest between two numbers.

/*
#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter the numbers:\t");
    scanf("%d%d",&a,&b);
    max = a;
    if(b>max)
    {
        max = b;
    }
    printf("\nThe larger number is:\t%d\n",max);
    return 0;
}
*/

/*WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet is
in lowercase, otherwise display an appropriate message.*/

/*
#include<stdio.h>

int main()
{
    char lower;
    int l,u;
    printf("Enter the character:\t");
    scanf("%c",&lower);
    l = lower;
    if(l>=97 && l<=122)
    {
        u = l - 32;
        printf("\nThe upper case of the entered letter is '%c'\n",u);
    }
    else if(l>=65 && l<= 91)
    {
        printf("\nYou have entered '%c' which is already in upper case\n",lower);
    }
    else
    {
        printf("Wrong input!!");
    }
    return 0;
}
*/

/* WAP to read a character from the user and test whether it is a vowel or consonant or not an alphabet. */

/*
#include<stdio.h>
int main()
{
    char letter;
    int l;
    printf("Enter the alphabet (capital):\t");
    scanf("%c",&letter);
    l = letter;
    if ( l >=65 && l<=91)
    {
        if (letter =='A' || letter =='E' || letter =='I' || letter =='O' || letter =='U')
        {
            printf("Its a VOWEL");
        }
        else
        {
            printf("Its a CONSTANT");
        }
    }
    else
    {
        printf("The entered character is not an alphabet ");
    }
    return 0;
}
*/

/* WAP to input any two integers, and provide a menu to the user to select any of the options as
  add, subtract, multiply, divide and display the result accordingly */

  /*
#include<stdio.h>
int main()
{
    char input;
    int a,b;
    printf("\nEnter the operator:\t");
    scanf("%c",&input);
    printf("Enter the operands:\t");
    scanf("%d%d",&a,&b);
    switch(input)
    {
        case('A'):
            printf("\nThe sum is:%d\n",a+b);
            break;
        case('S'):
            printf("\nThe difference is:%d\n",a-b);
            break;
        case('M'):
            printf("\nThe product is:%d\n",a*b);
            break;
        case ('D'):
            printf("\nThe quotient is: %n\t",a/b);
            break;
        default:
            printf("\nWrong Input!!!!!\n");

    }
    return 0;
}
*/

/*Print weekday name program according to given weekday number using switch-case
weekday number (0-6) and print weekday name (Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, and Saturday)*/


/*#include<stdio.h>
int main()
{
    int day;
    printf("Enter the week day:\t");
    scanf("%d",&day);
    switch (day)
    {
        case(1):
            printf("Its Monday!!");
            break;
        case(2):
            printf("Its Tuesday!!");
            break;
        case(3):
            printf("Its Wednesday!!");
            break;
        case(4):
            printf("Its Thursday!!");
            break;
        case(5):
            printf("Its Friday!!");
            break;
        case(6):
            printf("Its Saturday!!");
            break;
        default:
            printf("INVALID!!!!!!!!!!");

    }
    return 0;
}*/

/*WAP to determine the eligibility for admission based on the following criteria:

Eligibility Criteria:
Marks in Maths>=65 and Marks in Phy>=55 and Marks in Chem>=50 and
Total in all three subjects>=190 or Total in Maths and Physics >=140*/

/*
#include<stdio.h>
int main()
{
    int marks,m,p,c;
    printf("Enter the marks in maths:");
    scanf("%d",&m);
    printf("\nEnter the marks in physics:");
    scanf("%d",&p);
    printf("\nEnter the marks in chemistry:");
    scanf("%d",&c);
    if ((m>=65 && p>=55 && c>=50 && m+p+c>=190)||(m+p>=140))
    {
        printf("\nYou are qualified!!!\n");
    }
    else
    {
        printf("\nSorry you are not qualified!!\n");
    }
    return 0;

}
*/

/*WAP to check whether the triangle is equilateral, isosceles or scalene (Triangle consists of three sides of provided lengths n1, n2 and n3 units).*/

/*
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the measurement of the three sides of the triangle\t");
    scanf("%d%d%d",&a,&b,&c);
    if (a==b && b==c && a == c)
    {
        printf("\nIts a equilateral triangle\n");
    }
    else if (a==b || b ==c ||a == c)
    {
        printf("\nIts a isosceles triangle\n");
    }
    else
    {
        printf("\nIts a scalene triangle\n");
    }
    return 0;
}
*/
//eight
/*
#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the rows and column:\t",r);
    scanf("%d%d",&r,&c);
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j<=c;j++)
        {
            if(i == 1 || i == r || i==(r+1)/2 || j == 1 ||j ==c )
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//one
/*
#include<stdio.h>
int main()
{
    int r,c ;
    printf("Enter the rows and column:\t");
    scanf("%d%d",&r,&c);
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j <=c;j++)
        {
            if(i<=r && j==c/2)
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//zero
/*
#include<stdio.h>
int main()
{
    int r,c ;
    printf("Enter the rows and column:\t");
    scanf("%d%d",&r,&c);
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j <=c;j++)
        {
            if(i==1 || i==r || j==1 || j==c)
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//three
/*
#include<stdio.h>
int main()
{
    int r,c ;
    printf("Enter the rows and column:\t");
    scanf("%d%d",&r,&c);
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j <=c;j++)
        {
            if(i == 1 || i==r/2 || i==r || j==c)
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//two
/*
#include<stdio.h>
int main()
{
    int r,c ;
    printf("Enter the rows and column:\t");
    scanf("%d%d",&r,&c);
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j <=c;j++)
        {
            if(i == 1||i==r/2||i==r||(i<=r/2 && j==c )||(i>=r/2 && i<=r && j == 1))
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//four
/*
#include<stdio.h>
int main()
{
    int r,c ;
    printf("Enter the rows and column:\t");
    scanf("%d%d",&r,&c);
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j <=c;j++)
        {
            if(i==r/2||( j==c )||(i<=r/2 && j == 1) )
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//five
/*
#include<stdio.h>
int main()
{
    int r,c ;
    printf("Enter the rows and column:\t");
    scanf("%d%d",&r,&c);
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j <=c;j++)
        {
            if(i==1||i==r||i==r/2||(j==1 && i<=r/2)||(j==c && i>=r/2 && i<=r))
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//six
/*
#include<stdio.h>
int main()
{
    int r,c ;
    printf("Enter the rows and column:\t");
    scanf("%d%d",&r,&c);
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j <=c;j++)
        {
            if((i==1||i==r||i==r/2||(j==1 && i<=r/2)||((j==c ||j == 1)&& i>=r/2 && i<=r)))
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//seven
/*
#include<stdio.h>
int main()
{
    int r,c ;
    printf("Enter the rows and column:\t");
    scanf("%d%d",&r,&c);
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j <=c;j++)
        {
            if(i==1||j==c)
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//nine
/*
#include<stdio.h>
int main()
{
    int r,c ;
    printf("Enter the rows and column:\t");
    scanf("%d%d",&r,&c);
    for(int i = 1;i<=r;i++)
    {
        for(int j = 1;j <=c;j++)
        {
            if((i <=r/2 && j==1)|| i==1 ||i==r/2||i == r||j ==c)
            {
               printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
//number display
#include<stdio.h>
int main()
{
    int n,r,c;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("Enter the rows and column:\t");
    scanf("%d%d",&r,&c);
    switch (n)
    {
    case 0:
        for(int i = 1;i<=r;i++)
        {
            for(int j = 1;j <=c;j++)
            {
                if(i==1 || i==r || j==1 || j==c)
                {
                   printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    case 1:
        for(int i = 1;i<=r;i++)
        {
            for(int j = 1;j <=c;j++)
            {
                if(i<=r && j==c/2)
                {
                   printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        break;
    case 2:
        for(int i = 1;i<=r;i++)
        {
            for(int j = 1;j <=c;j++)
            {
                if(i == 1||i==r/2||i==r||(i<=r/2 && j==c )||(i>=r/2 && i<=r && j == 1))
                {
                   printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        break;
    case 3:
        for(int i = 1;i<=r;i++)
        {
            for(int j = 1;j <=c;j++)
            {
                if(i == 1 || i==r/2 || i==r || j==c)
                {
                   printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        break;
    case 4:
        for(int i = 1;i<=r;i++)
        {
            for(int j = 1;j <=c;j++)
            {
                if(i==r/2||( j==c )||(i<=r/2 && j == 1) )
                {
                   printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        break;
    case 5:
        for(int i = 1;i<=r;i++)
        {
            for(int j = 1;j <=c;j++)
            {
                if(i==1||i==r||i==r/2||(j==1 && i<=r/2)||(j==c && i>=r/2 && i<=r))
                {
                   printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        break;
    case 6:
        for(int i = 1;i<=r;i++)
        {
            for(int j = 1;j <=c;j++)
            {
                if((i==1||i==r||i==r/2||(j==1 && i<=r/2)||((j==c ||j == 1)&& i>=r/2 && i<=r)))
                {
                   printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        break;
    case 7:
        for(int i = 1;i<=r;i++)
        {
            for(int j = 1;j <=c;j++)
            {
                if(i==1||j==c)
                {
                   printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        break;
    case 8:
        for(int i = 1;i<=r;i++)
        {
            for(int j = 1;j<=c;j++)
            {
                if(i == 1 || i == r || i==(r+1)/2 || j == 1 ||j ==c )
                {
                   printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
        break;
    case 9:
        for(int i = 1;i<=r;i++)
        {
            for(int j = 1;j <=c;j++)
            {
                if((i <=r/2 && j==1)|| i==1 ||i==r/2||i == r||j ==c)
                {
                   printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    default:
        printf("INVALID OUTPUT!!!");


    }
    return 0;
}
