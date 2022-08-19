#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Enter the value of c: ");
	scanf("%d",&c);
	printf("Enter the value of d: ");
	scanf("%d",&d);
	(a==b && b==c && c==d)
	   ?printf("ALL values are same.")
	   :(a>b && a>c && a>d)
			? printf("a is max")

			: (b>c && b>d)
			? printf("b is max")

			:(c>d)
			? printf("c is max")
			: printf("d is max");
	  getch();
}