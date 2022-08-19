#include<stdio.h>
#include<conio.h>
main()
{
	int n,r=0,temp;
	clrscr();
	printf("Enter a number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
	   	 r=(r*10)+n%10;
	     n=n/10;
	}
	if(temp==r)
	{
		printf("Palindrome number");
	}
	else
	{
		printf("Not Palindrome number");
	}
	getch();
}
