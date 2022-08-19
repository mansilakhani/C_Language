#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
       //without using third varaible.
	clrscr();
	printf("Enter value of a: " );
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swap two variable:\n a:%d\n b:%d\n",a ,b);
	getch();
}