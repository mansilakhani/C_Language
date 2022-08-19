#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();
	printf("Enter character: ");
	scanf("%c",&ch);
	if(ch >= 'a' && ch <= 'z')
	{
	  printf("This is a small letter");
	}
	else if(ch >= 'A' && ch <= 'Z')
	{
	  printf("This is a capital letter");
	}
	else if(ch >= '0' && ch <= '9')
	{
	  printf("This is a digit");
	}
	else
	{
	  printf("This is a special character");
	}
	getch();
}