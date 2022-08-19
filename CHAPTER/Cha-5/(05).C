#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("Enter any number(1 to N): ");
	scanf("%d",&n);
	i=1;
	do
	{
	  printf("%d\n",i);
	  i++;
	}
	while(i<=n);
	getch();
}