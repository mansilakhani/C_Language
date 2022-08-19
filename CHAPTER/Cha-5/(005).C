#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("Enter any number(1 to N): ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	  printf("%d\n",i);
	}
	getch();
}