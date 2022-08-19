#include<stdio.h>
#include<conio.h>
main()
{
	int v,s,d,t;
	clrscr();
	printf("Enter speed: ");
	scanf("%d",&s);
	printf("Enter time: ");
	scanf("%d",&t);
	//s=d/t;
	//d=s*t;
	//v=d/t;
	d=s*t;
	v=s*t/t;
	printf("Velocity: %d",v);
	getch();
	}
