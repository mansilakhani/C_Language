#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,n=1;
/*	clrscr();*/
	for(i=4;i>=1;i--)
	{
	  for(k=4;k>=i;k--)
	   {
	      printf(" ");
	   }
	   for(j=1;j<=i;j++)
	   {
	      printf("%d",n++);
	   }
	   printf("\n");
	}
	getch();

}
