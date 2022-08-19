#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	printf("Odd numbers: \n");
	i=1;
	do
	{
	   if(i%2!=0)
	   {
	     printf("%d\n",i);
	   }
	   i++;
	}
	while(i<=10);
	getch();
}