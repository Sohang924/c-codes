
/*// C program to illustrate the use of structures
#include <stdio.h>

// declaring structure with name str1
struct str1 {
	int i;
	char c;
	float f;
	char s[30];
};

// declaring structure with name str2
struct str2 {
	int ii;
	char cc;
	float ff;
}; //var; // variable declaration with structure template

// Driver code
int main()
{
	// variable declaration after structure template
	// initialization with initializer list and designated
	// initializer list
	struct str1 var1 = { 1, 'A', 1.00, "GeeksforGeeks" },
				var2;
	struct str2 var3 = { .ff = 5.00, .ii = 5, .cc = 'a' };

	// copying structure using assignment operator
	var2 = var1;

	printf("Struct 1:\n\ti = %d, c = %c, f = %f, s = %s\n",
		var1.i, var1.c, var1.f, var1.s);
	printf("Struct 2:\n\ti = %d, c = %c, f = %f, s = %s\n",
		var2.i, var2.c, var2.f, var2.s);
	printf("Struct 3\n\ti = %d, c = %c, f = %f\n", var3.ii,
		var3.cc, var3.ff);

	return 0;
}*/
//arr
//WAP to store one student’s information (i.e. student’s roll no, name, gender, marks etc) of an
//educational institute and display all the data, using structure
/*
#include<stdio.h>
struct student{
    char name[100];
    int roll;
    int gender;
    float marks;
};
int main()
{
    int x ;
    struct student s;
    printf("Enter the name :");
    scanf("%[^\n]s",&s.name);
    printf("\nEnter the roll number: ");
    scanf("%d",&s.roll);
    printf("Enter the gender:");
    scanf(" %c",&s.gender);
    //the space before %c is goven so that the header file <stdio.h> can read the non white spaces
    printf("\nEnter the marks: ");
    scanf("%f",&s.marks);
    printf("\nName: %s\nRoll number: %d\nGender: %c\nMarks :%.2f",s.name,s.roll,s.gender,s.marks);
    return 0;
}
*/
/*WAP to store n students’ information (i.e. student’s roll no, name, gender, marks in 5 subjects
etc) of an educational institute and display all the data with total marks of each student, using
array of structure. If full mark of each subject is considered as 100 and pass mark as 40, then
display the list of students failed in a particular subject. */
/*
#include<stdio.h>
struct students
{
    char name[100];
    int roll;
    char gender;
    float marks1,marks2,marks3,marks4,marks5,total;
};
int main()
{
    int n,fail = 0;
    printf("Enter the number of inputs: ");
    scanf("%d",&n);
    struct students s[n];
    for (int i = 0; i<n; i++)
    {
        printf("\nEnter the name :");
        scanf(" %[^\n]s",&s[i].name);
        printf("\nEnter the roll number: ");
        scanf("%d",&s[i].roll);
        printf("\nEnter the gender:");
        scanf(" %c",&s[i].gender);
        printf("\nEnter the marks1: ");
        scanf("%f",&s[i].marks1);
        printf("\nEnter the marks2: ");
        scanf("%f",&s[i].marks2);
        printf("\nEnter the marks3: ");
        scanf("%f",&s[i].marks3);
        printf("\nEnter the marks4: ");
        scanf("%f",&s[i].marks4);
        printf("\nEnter the marks5: ");
        scanf("%f",&s[i].marks5);
        s[i].total = s[i].marks1+s[i].marks2+s[i].marks3+s[i].marks4+s[i].marks5;
    }
    for (int i =0; i<n; i++)
    {
        printf("\nName: %s\nRoll number: %d\nGender: %c\nMarks1 :%.2f \nMarks2 :%.2f \nMarks3 :%.2f \nMarks4 :%.2f \nMarks5 :%.2f\nTotal :%.2f",
               s[i].name,s[i].roll,s[i].gender,s[i].marks1,s[i].marks2,s[i].marks3,s[i].marks4,s[i].marks5,s[i].total);
        printf("\n");
        if (s[i].marks1<40 || s[i].marks2<40 || s[i].marks3<40|| s[i].marks4<40)
            fail++;
    }
    printf("List of students who failed %d",fail);
    return 0;
}
*/
//WAP to add two distances (in km-meter) using structures.
/*
#include<stdio.h>
struct distance
{
    int km ,m;
};
int main()
{
    int dist_km = 0,dist_m;
    struct distance s[2];
    for (int i = 1; i<=2; i++)
    {
        printf("INPUT %d",i);
        printf("\nEnter the km: ");
        scanf("%d",&s[i].km);
        printf("Enter the m: ");
        scanf("%d",&s[i].m);
        dist_km += (s[i].km*1000) + s[i].m;
        printf("\n%d",dist_km);
    }
    dist_m = dist_km%1000;
    dist_km = dist_km/1000;
    printf("\nDISTANCE IS: \n%dkm %dm",dist_km,dist_m);
    return 0;
}
*/
/*
#include <stdio.h>

struct TIME {
  int hr;
  int min;
  int sec;
};

void addTime(struct TIME t1, struct TIME t2, struct TIME *result) {
  result->hr = t1.hr + t2.hr;
  result->min = t1.min + t2.min;
  result->sec = t1.sec + t2.sec;

  if (result->sec >= 60) {
    result->min++;
    result->sec -= 60;
  }

  if (result->min >= 60) {
    result->hr++;
    result->min -= 60;
  }
}

int main() {
  struct TIME t1, t2, result;

  printf("Enter the first time (hh:mm:ss): ");
  scanf("%d:%d:%d", &t1.hr, &t1.min, &t1.sec);

  printf("Enter the second time (hh:mm:ss): ");
  scanf("%d:%d:%d", &t2.hr, &t2.min, &t2.sec);

  addTime(t1, t2, &result);

  printf("The sum of the two times is %d:%d:%d\n", result.hr, result.min, result.sec);

  return 0;
}*/
#include<stdio.h>
struct time
{
    int h,m,s;
};
void add(int *,int *,int *,int*);
int main()
{
    int total=0;
    struct time t[2];
    for (int i = 0; i<2; i++)
    {
        printf("INPUT %d",i+1);
        printf("\nEnter the time (hh:mm:ss): ");
        scanf("%d:%d:%d",&t[i].h,&t[i].m,&t[i].s);
        add (&t[i].h,&t[i].m,&t[i].s,&total);
    }
    printf("\n%d",total);
    //printf("The resultant time is: %d:%d:%d",);
    return 0;
}
void add(int*h,int*m,int*s,int*total)
{
    *total += ((*h)*60*60)+(*m)*60+s;
}
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct employee {
  char name[50];
  char gender;
  char designation[50];
  char department[50];
  float basic_pay;
  float gross_pay;
} Employee;

void inputEmployeeData(Employee *emp) {
  printf("Enter employee name: ");
  scanf("%s", emp->name);

  printf("Enter employee gender (M/F): ");
  scanf(" %c", &emp->gender);

  printf("Enter employee designation: ");
  scanf("%s", emp->designation);

  printf("Enter employee department: ");
  scanf("%s", emp->department);

  printf("Enter employee basic pay: ");
  scanf("%f", &emp->basic_pay);
}

void calculateGrossPay(Employee *emp) {
  float hr = emp->basic_pay * 0.25;
  float da = emp->basic_pay * 0.75;
  emp->gross_pay = emp->basic_pay + hr + da;
}

void printEmployeeData(Employee emp) {
  printf("Employee name: %s\n", emp.name);
  printf("Employee gender: %c\n", emp.gender);
  printf("Employee designation: %s\n", emp.designation);
  printf("Employee department: %s\n", emp.department);
  printf("Employee basic pay: %.2f\n", emp.basic_pay);
  printf("Employee gross pay: %.2f\n", emp.gross_pay);
}

int main() {
  int n;
  printf("Enter the number of employees: ");
  scanf("%d", &n);

  Employee *employees = (Employee *) malloc(n * sizeof(Employee));

  for (int i = 0; i < n; i++) {
    printf("\nEnter data for employee %d:\n", i + 1);
    inputEmployeeData(employees + i);
    calculateGrossPay(employees + i);
  }

  printf("\nEmployee Data:\n");
  for (int i = 0; i < n; i++) {
    printf("\nEmployee %d:\n", i + 1);
    printEmployeeData(employees[i]);
  }

  free(employees);

  return 0;
}
*/
