#include<stdio.h>
#include<conio.h>
main()
{
	int area,l,b;
	clrscr();
	printf("Enter length of rectangle: ");
	scanf("%d",&l);
	printf("Enter breadth of rectangle: ");
	scanf("%d",&b);
	area=l*b;
	printf("Area of rectangle:%d",area);
	getch();

}