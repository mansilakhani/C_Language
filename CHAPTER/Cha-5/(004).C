#include<stdio.h>
#include<conio.h>
main()
{
	int i;
	clrscr();
	printf("Even numbers: \n");
	for(i=10;i>=1;i--)
	{
	   if(i%2==0)
	   {
	    printf("%d\n",i);
	   }
	}
	getch();
}