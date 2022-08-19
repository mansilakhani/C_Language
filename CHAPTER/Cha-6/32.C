#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,l,m;
	clrscr();
	for(i=5;i>=1;i--)
	{
	     for(j=1;j<=i;j++)
	     {
		printf("%d",j);
	     }
	      for(k=i;k<5;k++)
	     {
		printf(" ");
	     }
	      for(l=i;l<4;l++)
	     {
		printf(" ");
	     }
	     for(m=i;m>=1;m--)
	     {
	     	if(m!=5)
	     	{
	     	  printf("%d",m);	
			}
		}
	     printf("\n");
	}
	getch();
}
