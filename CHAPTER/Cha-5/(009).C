#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum=0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    sum=i+sum;
	}
	printf("%d",sum);
	getch();
}