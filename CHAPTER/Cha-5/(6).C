#include<stdio.h>
#include<conio.h>
main()
{
	int i,n;
	clrscr();
	printf("Enter any number(N to 1): ");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		printf("%d\n",i);
		i--;
	}
	getch();
}
