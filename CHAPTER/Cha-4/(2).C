#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("Enter days: ");
	scanf("%d",&n);
	if(n>0 && n<=31)
	{
		printf("January\n");
	}
	else if(n>31 && n<=59)
	{
		printf("February\n");
	}
	else if(n>59 && n<=90)
	{
		printf("March\n");
	}
	else if(n>90 && n<=120)
	{
		printf("April\n");
	}
	else if(n>120 && n<=151)
	{
		printf("May\n");
	}
	else if(n>151 && n<=181)
	{
		printf("June\n");
	}
	else if(n>181 && n<=212)
	{
		printf("July\n");
	}
	else if(n>212 && n<=243)
	{
		printf("August\n");
	}
	else if(n>243 && n<=273)
	{
		printf("September\n");
	}
	else if(n>304 && n<=334)
	{
		printf("October\n");
	}
	else if(n>334 && n<=365)
	{
		printf("December\n");
	}
	else
	{
		printf("Wrong input");
	}
	if(n%7==1 && n<=365)
	{
		printf("Saturday");
	}
	if(n%7==2 && n<=365)
	{
		printf("Sunday");
	}
	if(n%7==3 && n<=365)
	{
		printf("Monday");
	}
	if(n%7==4 && n<=365)
	{
		printf("Tuesday");
	}
	if(n%7==5 && n<=365)
	{
		printf("Wednesday");
	}
	if(n%7==6 && n<=365)
	{
		printf("Thursday");
	}
	if(n%7==0 && n<=365)
	{
		printf("Friday");
	}
	getch() ;
}