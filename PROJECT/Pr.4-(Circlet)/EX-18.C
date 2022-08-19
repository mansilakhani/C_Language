#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,l,m;
	clrscr();
	for(i=1;i<=5;i++)
	{
	   for(j=1;j<=i;j++)
	   {
	     printf("%d",j);
	   }
	    for(k=i;k<5;k++)
	   {
	     printf(" ");
	   }
	    for(l=5;l>i;l--)
	   {
	     printf(" ");
	   }
	    for(m=i;m>=1;m--)
	   {
	     printf("%d",m);
	   }
	printf("\n");
	}
	getch();
}
