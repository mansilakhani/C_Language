#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,f=1;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    f=f*i;
	}
	printf("Factorial : %d",f);
	getch();
}