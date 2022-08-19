#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("Enter days: ");
	scanf("%d",&n);
	if(n%7==1 && n<=31)
	{
		printf("Saturday");
	}
	else if(n%7==2 && n<=31)
	{
		printf("Sunday");
	}
	else if(n%7==3 && n<=31)
	{
		printf("Monday");
	}
	else if(n%7==4 && n<=31)
	{
		printf("Tuesday");
	}
	else if(n%7==5 && n<=31)
	{
		printf("Wednesday");
	}
	else if(n%7==6 && n<=31)
	{
		printf("Thursday");
	}
	else if(n%7==0 && n<=31)
	{
		printf("Friday");
	}
	else
	{
		printf("Wrong input");
	}
	getch();

}