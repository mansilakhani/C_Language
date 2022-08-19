#include<stdio.h>
#include<conio.h>
main()
{
	int n,c=0;
	clrscr();
	printf("Enter the value: ");
	scanf("%d",&n);
	while(n!=0)
	{
	   n=n/10;
	   c++;
	}
	printf("Count number of digits: %d",c);
	getch();
}