#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,r=5,l=5;
    clrscr();
    for(i=1;i<=4;i++)
    {
       for(j=1;j<=10;j++)
       {
	  if(j==r || j==l)
	  {
	    printf("*");
	  }
	  else
	  {
	    printf(" ");
	  }
       }
       r--;
       l++;
       printf("\n");
    }
    getch();
}
