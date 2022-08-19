#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n,k;
	clrscr();
	printf("Enter a number:	 ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	    for(k=i;k<n;k++)
	   {
	     printf(" ");
	   }
	   for(j=i;j>=1;j--)
	   {
	     printf("%d",j);
	   }
	   printf("\n");
	}
	getch();
}