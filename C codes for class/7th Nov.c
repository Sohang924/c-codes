//STRINGS
//WAP to find the length of a string with/without using library function for getting length of the string
/*
#include<stdio.h>
int length(char[]);
int main()
{
    char s[1000];
    printf("Enter the string: ");
    scanf("%s",&s);
    //len = sizeof(s)/sizeof(s[0]);// will always take the entire value i.e will print 1000 always....
    //so cant be used;
    printf("The length of the string is %d",length(s));
    return 0;
}
int length(char s[])
{
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)//'/0' is a character not a group so always to be quoted with ' '.
    {
        len++;
    }
    return len;
}
*/
//Write a program to extract last character of every word present in a sentence.
/*
#include<stdio.h>
void lastch(char[]);
int main()
{
    char s[1000];
    printf("Enter the string: ");
    scanf("%[^\n]s",&s);//regnex charecter
    lastch(s);
    return 0;
}
void lastch(char s[])
{
    int p ,i = 0;
    for (; s[i]!='\0';i++)
    {
        if (s[i] == ' ')
        {
            printf("%c",s[i-1]);
        }
    }
    printf("%c",s[i-1]);
}
*/
//Write a program to concatenate two strings without using any library function.
/*
#include<stdio.h>
void concat(char[],char[]);
int main()
{
    char s1[100];
    char s2[100];
    printf("Enter the string 1: ");
    scanf("%s",&s1);
    printf("Enter the string 2: ");
    scanf("%s",&s2);
    //printf("%s",s1);
    //printf(" %s",s2);
    concat(s1,s2);
    return 0;
}
void concat(char s1[],char s2[])
{
    int n=0,m=0;
    for(; s1[n]!= '\0';n++)
    {
    }
    for (;s2[m]!= '\0';m++)
    {
        s1[n+m] = s2[m];
    }
    s1[n+m+1] = '\0';
    printf("%s",s1);
    return;
}
*/
//Write a program to check whether an entered string is palindrome or not.
/*
#include<stdio.h>
void palindrome(char[]);
int main()
{
    char s1[100];
    printf("Enter the string 1: ");
    scanf("%s",&s1);

    palindrome(s1);
    return 0;
}
void palindrome(char s1[])
{
    int n = 0, p=0;
    for (int i = 0;s1[i] != 0; i++)
    {
        n++;
    }
    //printf("%d\n",n);
    for (int i = 0; i<n/2; i++)
    {
        if (s1[i] != s1[n-i-1])
        {
            //printf("%c %c\n",s1[i],s1[n-i-1]);
            p++ ;
        }
    }
    printf("%d",p);
    if (p == 0)
    {
        printf("\nIts a palindrome");
    }
    else
    {
        printf("\nIts not a palindrome");
    }
}
*/
//Write a C program to extract a substring from a given string. Prompt the user to enter the starting position and length of the substring.
/*
#include<stdio.h>
void substring(char[],int,int);
int main()
{
    int n1,n2;
    char s1[100];
    printf("Enter the string 1: ");
    scanf("%s",&s1);
    printf("Enter the starting index: ");
    scanf("%d",&n1);
    printf("Enter the ending index: ");
    scanf("%d",&n2);
    substring(s1,n1,n2);
    return 0;
}
void substring(char s1[],int n1,int n2)
{
    printf("\n");
    for (int i = (n1-1); i<(n2); i++)
    {
            printf("%c",s1[i]);
    }
}

//Write a C program to find the first largest word in a given sentence. Assume that words are separated by spaces.
/*
#include<stdio.h>
void largest(char[]);
int main()
{
    int n1,n2;
    char s1[100];
    printf("Enter the string 1: ");
    scanf("%[\^n]s",&s1);
    largest(s1);
    return 0;
}
void largest(char[])
{
    char s[100][100];
    for (int i =0; s1[i] =' ';i++)
    {

    }
}
*/
/*
#include <stdio.h>
int main() {
    char sentence[1000];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    // Remove the trailing newline character
    int len = 0;
    while (sentence[len] != '\n')
    {
        len++;
    }
    sentence[len] = '\0';

    char largestWord[100];
    char currentWord[100];
    int i = 0, j = 0, wordLength;
    int maxLength = 0;

    while (sentence[i] != '\0') {
        // Extracting a word
        j = 0;
        while (sentence[i] != ' ' && sentence[i] != '\0') {
            currentWord[j] = sentence[i];
            j++;
            i++;
        }
        currentWord[j] = '\0';
        wordLength = 0;
        while (currentWord[wordLength] != '\0') {
            wordLength++;
        }

        // Check if it's the largest word so far
        if (wordLength > maxLength) {
            maxLength = wordLength;

            // Copy currentWord to largestWord
            j = 0;
            while (currentWord[j] != '\0') {
                largestWord[j] = currentWord[j];
                j++;
            }
            largestWord[j] = '\0';
        }

        // Move to the next word
        if (sentence[i] != '\0') {
            i++;
        }
    }

    printf("The first largest word is: %s\n", largestWord);

   return 0;
}
*/
//Write a program to count the number of vowels, consonants, new lines and the total number of characters and words present in a string.
/*
#include<stdio.h>
void counter(char[]);
int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%[^.]d",&s);
    counter(s);
    return 0;
}
void counter(char s[])
{
    int v = 0,c = 0,spch = 0,ch = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        ch++;
        if ((s[i]>= 'A' && s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
        {
            if (s[i] == 'a'||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'||s[i] == 'A'||s[i] == 'E'||s[i] == 'I'||s[i] == 'O'||s[i] == 'U')
            {
                v++;
            }
            else
            {
                c++;
            }
        }
        else if (s[i] == '\n')
        {
            spch++;
        }
    }
    printf("Total number of characters: %d",ch);
    printf("\nVowels: %d",v);
    printf("\nConsonants: %d",c);
    printf("\nNewline characters: %d",spch);
}
*/
//Write a program to count the frequency of each character present in a string.
/*
#include<stdio.h>
void frequency(char[]);
int main()
{
    char s[100];
    printf("Enter the string: ");
    scanf("%[^\n]s",&s);
    frequency(s);
    return 0;
}
void frequency(char s[])
{
    for (int i = 0; s[i]!= '\0'; i++)
    {
        int f =0;
        for (int j = i; s[j]!='\0'; j++)
        {
            if (s[i] == s[j])
            {
                f++;
            }
        }
        printf("\n%c = %d",s[i],f);
    }
}
*/
int* ((*x)())[2];
