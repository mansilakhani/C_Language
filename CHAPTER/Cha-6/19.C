#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
	   for(k=5;k>i;k--)
	   {
	      printf(" ");
	   }
	   for(j=1;j<=i;j++)
	   {
	     printf("%d",i);
	   }
	   printf("\n");
	}

	getch();
}
