#include<stdio.h>
#include<conio.h>
main()
{
	int area,b,h;
	clrscr();
	printf("Enter the base of triangle: ");
	scanf("%d",&b);
	printf("Enter the height of triangle: ");
	scanf("%d",&h);
	area=(b*h)/2;
	printf("Area of triangle:%d",area);
	getch();
}