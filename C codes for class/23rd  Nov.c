//UNION and STRUCTURE:

//Unions: Unions are used when there are multiple possible data representations for a single entity.
//They are useful for handling situations where the specific data type is unknown or may change dynamically.
//For example, a data_type union might include members for int, float, and string, allowing the value to be interpreted based on the context.




//WAP to declare an union named as ABC having three members a, b and c as character, integer
//and double respectively. Assign user entered values to these members respectively one by one and display these values immediately.
//Again, assign these user entered values to a, b, c one by
//one, all together and display these values at last. Find the difference.
/*
#include <stdio.h>
union Example {
   int i;
   double d;
   char c;
};
int main( )
{

   union Example eg;
   printf("\nEnter the character: ");
   scanf("%c",&eg.c);
   printf("\nCharacter: %c",eg.c);
   printf("\nEnter the value of integer: ");
   scanf("%d",&eg.i);
   printf("\nInteger: %d",eg.i);
   printf("\nEnter the double: ");
   scanf("%lf",&eg.d);
   printf("\nDouble: %lf",eg.d);
   return 0;
}
*/
//Use structures to perform addition, subtraction, multiplication and division operations on two complex numbers.
/*
#include<stdio.h>
struct calculator
{
    int p,q;
};
void sum(int, int, int, int);
void difference(int, int, int, int);
void product(int, int, int, int);
void division(int, int, int, int);
void func(int, int, int, int);
int main()
{
    char choice;
    struct calculator c[2];
    printf("Enter the real and imaginary units of first complex number:");
    for (int i = 1; i<=2; i++)
    {
        printf("\nINPUT %d",i);
        printf("\nEnter the real part: ");
        scanf("%d",&c[i].p);
        printf("\nEnter the imaginary part: ");
        scanf("%d",&c[i].q);
    }
    printf("\nFirst input is: %d + %d i",c[1].p,c[1].q);
    printf("\nSecond input is: %d+ %d i",c[2].p,c[2].q);
    printf("\nWhat do you want to do?");
    printf("\n");
    printf("\nPress e for exit");
    printf("\nPress a for addition");
    printf("\nPress s for subtraction");
    printf("\nPress m for multiplication");
    printf("\nPress d for division: ");
    printf("\nyour choice: ");
    scanf(" %c",&choice);
        if (choice == 'a')
        {
            sum(c[1].p,c[1].q,c[2].p,c[2].q);
        }
        if (choice == 'm')
        {
            product(c[1].p,c[1].q,c[2].p,c[2].q);
        }
        if (choice == 's')
        {
            difference(c[1].p,c[1].q,c[2].p,c[2].q);
        }
        if (choice == 'd')
        {
            division(c[1].p,c[1].q,c[2].p,c[2].q);
        }
        if (choice == 'e')
        {
            printf("\nTHANK YOU !");
        }
    return 0;

}

void sum(int p1,int q1,int p2,int q2)
{
    printf("The sum is : %d + %d i",p1+p2,q1+q2);
}
void difference(int p1,int q1,int p2,int q2)
{
    printf("The difference is : %d + %d i",p1-p2,q1-q2);
}
//(a+ib)(c+id) = (ac- bd)+ i(ad + bc)
void product(int p1,int q1,int p2,int q2)
{
    printf("The product is : %d + %d i",(p1*p2)-(q1*q2),(p1*q2)-(q1*p2));
}
//a+bi    ac + bd     bc - ad
//____ =  _______  +  _______  i
//c+di    cc+ dd      cc + dd
void division(int p1,int q1,int p2,int q2)
{
    int m = ((p1*p2)+(q1*q2)/(p2*p2) +(q2*q2));
    int n = ((q1*p2)+(p1*q2)/(p2*p2) +(q2*q2));
    printf("The quotient is: %d + %di",m,n);
}
*/
//Use an array of structures to calculate the gross salary and solve the increment issue in an office.
// Also, calculate the new salary structure after increment. Given basic: Rs 12500, DA: 50%, and HRA 10%.
#include<stdio.h>
#include<stdlib.h>
struct employee
{
    char firstName[100],lastName[100],category[100],address[100];
    float basic,gross;
};
struct employee e;
void empdetail();
void increment();
int main()
{
    char choice;
    printf("What do you want to do? \nA.Enter new employee details: \nB. Increment the salary:\n");
    scanf("%c",&choice);
    switch (choice)
    {
        case 'A':
            empdetail();
            break;

        case 'B':
            increment();
            break;
    }
    return 0;
}
void empdetail()
{
    printf("\nEnter the first name: ");
    scanf("%s",&e.firstName);
    printf("\nEnter the second name: ");
    scanf("%s",&e.lastName);
    printf("\nEnter category: ");
    scanf("%s",&e.category);
    printf("\nEnter the basic salary: ");
    scanf("%f",&e.basic);
    printf("\nEnter address: ");
    scanf("% [^\n]d",&e.address);
    e.gross = e.basic + (0.1)*e.basic + (0.5)*e.basic;
    printf("\n");
    printf("\nEMPLOYEE DETAILS\n");
//    printf("\------------------\n");
    printf("\n>>NAME: %s %s",e.firstName,e.lastName);
    printf("\n>>CATEGORY: %s",e.category);
    printf("\n>>ADDRESS: %s",e.address);
    printf("\n>>GROSS SALARY: %.2f",e.gross);
}
void increment()
{
    int inc;
    printf("Enter the percentage of increment: ");
    scanf("%d",&inc);
    printf("\nEMPLOYEE DETAILS\n");
//    printf("\------------------\n");
    printf("\n>>NAME: %s %s",e.firstName,e.lastName);
    printf("\n>>CATEGORY: %s",e.category);
    printf("\n>>ADDRESS: %s",e.address);
    printf("\n>>GROSS SALARY: %.2f",e.gross + (e.gross*(inc/100)));
}

