//For example :  Built in function
#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
	char ch;

	printf("\n Enter any character : ");
	scanf("%c",&ch);

	if(isalpha(ch))
    {
        printf("\n Input character is alphabet");
    }
    else
    {
        printf("\n Input character is not alphabet");
    }

    printf("\n Upper character is : %c",toupper(ch));
}
