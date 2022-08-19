#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	printf("Even numbers: \n");
	i=10;
	do
	{
	   if(i%2==0)
	   {
	     printf("%d\n",i);
	   }
	   i--;
	}
	while(i>=1);
	getch();
}