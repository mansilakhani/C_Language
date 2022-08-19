#include<stdio.h>
#include<conio.h>
main()
{
	int i,s,e;
	clrscr();
	printf("Enter start year: ");
	scanf("%d",&s);
	printf("Enter end year: ");
	scanf("%d",&e);
	i=s;
	do
	{
		if((i%400==0) || (i%4==0 && i%100!=0))
		{
			printf("%d\n",i);
		}
		i++;
	}
	while(i<=e);
	getch();
}