#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,n,sum;
	clrscr();
	printf("Enter the value: ");
	scanf("%d",&n);
	a=1;
	do
	{
		b=1;
		do
		{
		    sum=a*b;
		    printf("\n%d * %d=%d",a,b,sum);
		    b++;
		}
		while(b<=10);
		printf("\n");
		a++;
	}
	while(a<=n);
	getch();
}