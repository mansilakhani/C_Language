#include<stdio.h>
#include<conio.h>
main()
{
	int no;
	clrscr();
	printf("Enter any value: ");
	scanf("%d",&no);
	if(no>0)
	{
		printf("Positive number");
	}
	else if(no<0)
	{
		printf("Negative number");
	}
	else
	{
		printf("Neutral number");
	}
	getch();
}