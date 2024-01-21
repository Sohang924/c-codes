#include<stdio.h>
int main()
{
	char input;
	int i;
	printf("Enter the charecter:\t");
	scanf("%c",&input);
	i = input;
	if ((i>=65 && i<=91)||(i>=97 && i<=122))
	{
		if( input == 'A' || input == 'E' || input == 'I'|| input == 'O'|| input == 'U'|| input == 'a'||input == 'e'||input == 'i'||input == 'o'||input == 'u')
		{
			printf("\nIts a vowel!!\n");
		}
		else
		{
			printf("\nIts a consonant!!\n");
		}
	}
	
	else if(input >= '0' && input <= '9')
	{
		printf("\nIts a digit\n");
	}	
	else
	{
		printf("\nIts a special charecter!!\n");
	}
	return 0;
}	
