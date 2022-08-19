#include<stdio.h>
#include<conio.h>
main()
{
	int k,m;
	clrscr();
	printf("Enter distance of miles: ");
	scanf("%d",&m);
	k=m*1.6;
	printf("Convert km to mi: %d",k);
	getch();
}