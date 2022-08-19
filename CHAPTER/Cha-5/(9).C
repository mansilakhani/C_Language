#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,sum=0;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
	    sum=i+sum;
	    i++;
	}
	printf("%d",sum);
	getch();
}