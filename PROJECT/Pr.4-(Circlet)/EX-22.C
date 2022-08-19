#include<stdio.h>
#include<conio.h>
main()
{
   int i,j,k;         //A-65  ,E-69
   clrscr();
   for(i=65;i<=69;i++)
   {
      for(j=65;j<=i;j++)
      {
	 printf("%c",i);
      }
      printf("\n");
   }
   getch();
}
