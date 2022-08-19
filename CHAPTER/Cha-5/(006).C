#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("Enter any number(N to 1): ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		printf("%d\n",i);
	}
	getch();
}
