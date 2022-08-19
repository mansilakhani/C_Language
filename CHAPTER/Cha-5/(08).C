#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,f=1;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	i=1;
	do
	{
	   f=f*i;
	   i++;
	}
	while(i<=n);
	printf("Factorial : %d\n",f);
	getch();
}