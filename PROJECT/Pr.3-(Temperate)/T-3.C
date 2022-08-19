#include<stdio.h>
#include<conio.h>
main()
{
	int n,l,f,sum;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	l=n%10;
	while(n>=10)
	{
	    n=n/10;
	}
	f=n;
	sum=f+l;
	printf("Sum of first and last digit:%d",sum);
	getch();
}