#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,n,sum;
	clrscr();
	printf("Enter the value: ");
	scanf("%d",&n);
	a=1;
	while(a<=n)
	{
		b=1;
		while(b<=10)
		{
			sum=a*b;
			printf("\n%d * %d:%d",a,b,sum);
			b++;
		}
		printf("\n");
		a++;
	}
	getch();
}