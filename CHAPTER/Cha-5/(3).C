#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	printf("Odd number:\n");
	i=1;
	while(i<=10)
	{
	   if(i%2!=0)
	   {
	     printf("%d\n",i);
	   }
	   i++;
	}
	getch();
}