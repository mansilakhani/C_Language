#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	if(a<b)
	{
	    printf("a is min");
	}
	else
	{
	    printf("b is min");
	}
	getch();
}