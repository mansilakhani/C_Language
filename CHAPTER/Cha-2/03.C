#include<stdio.h>
#include<conio.h>
main()
{
	int area,l;
	clrscr();
	printf("Enter the length of side: ");
	scanf("%d",&l);
	area=l*l;
	printf("Area of square:%d",area);
	getch();
}