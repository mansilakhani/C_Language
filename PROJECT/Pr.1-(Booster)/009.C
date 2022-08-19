#include<stdio.h>
#include<conio.h>
main()
{
	int min,hour,totalmin;
	clrscr();
	printf("Enter hours: ");
	scanf("%d",&hour);
	printf("Enter minutes: ");
	scanf("%d",&min);
	totalmin=min+(hour*60);
	printf("Total number of minutes:%d",totalmin);
	getch();
}
