#include<stdio.h>
#include<conio.h>
main()
{
	int p,r,n,si;
	clrscr();
	printf("Enter principal: ");
	scanf("%d",&p);
	printf("Enter rate: ");
	scanf("%d",&r);
	printf("Enter time: ");
	scanf("%d",&n);
	si=p*r*n/100;
	printf("Simple interest:%d",si);
	getch();

}