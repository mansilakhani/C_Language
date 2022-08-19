#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,f=1;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
	   f=f*i;
	   i++;
	}
	printf("Factorail:%d\n	",f);
	getch();

}