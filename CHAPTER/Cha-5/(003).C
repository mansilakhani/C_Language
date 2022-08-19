#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	printf("Odd number:\n");
	for(i=1;i<=10;i++)
	{
	   if(i%2!=0)
	   {
	     printf("%d\n",i);
	   }
	}
	getch();
}