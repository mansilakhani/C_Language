#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("Enter any number(1 to N): ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{

	     printf("%d\n",i);
	     i++;
	}

	getch();
}