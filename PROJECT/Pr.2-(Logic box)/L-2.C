#include<stdio.h>
#include<conio.h>
main()
{
	int num;
	clrscr();
	printf("Enter any number: ");
	scanf("%d",&num);
	(num%2==0)
		?printf("Even number")
		:printf("Odd number");
	getch();
}
