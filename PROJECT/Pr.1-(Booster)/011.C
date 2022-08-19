#include<stdio.h>
#include<conio.h>
main()
{
	int A,B,C;
	clrscr();
	printf("Enter two angles of triangle:\n ");
	scanf("%d %d",&B,&C);
	A=180-(B+C);
	printf("Third angle of the triangle:%d",A);
	getch();

}