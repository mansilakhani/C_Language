#include<stdio.h>
#include<conio.h>
main()
{
	float pi=3.14;
	int area,r;
	clrscr();
	printf("Radius: ");
	scanf("%d",&r);
	area=3.14*r*r;
	printf("Area of circle: %d",area);
	getch();
}
