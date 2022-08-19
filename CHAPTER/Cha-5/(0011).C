#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,n,sum;
	clrscr();
	printf("Enter the value: ");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
	       for(b=1;b<=10;b++)
	       {
		    sum=a*b;
		    printf("\n%d * %d=%d",a,b,sum);
	       }
	       printf("\n");
	}
	getch();
}