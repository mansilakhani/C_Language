#include<stdio.h>
#include<conio.h>
main()
{
	float f,c;
	clrscr();
	printf("Enter the temperature of celsius: ");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("Fahrenheit:%.f",f);
	getch();




}