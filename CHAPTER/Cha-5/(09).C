#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum=0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	i=1;
	do
	{
	    sum=i+sum;
	    i++;
	}
	while(i<=n);
	printf("Sum : %d",sum);
	getch();
}