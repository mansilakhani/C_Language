#include<stdio.h>
#include<conio.h>
main()
{
	int r;
	float pi=3.14,v;
	clrscr();
	printf("Enter radius: ");
	scanf("%d",&r);
	v=(4/3)*pi*r*r*r;
	printf("Volume of sphere:%.f",v);
	getch();

}
