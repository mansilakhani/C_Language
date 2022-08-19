#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	printf("Even number: \n");
	i=10;
	while(i>=1)
	{
	   if(i%2==0)
	   {
	     printf("%d\n",i);
	   }
	   i--;
	}
	getch();
}