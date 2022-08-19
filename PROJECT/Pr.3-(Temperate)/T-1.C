#include<stdio.h>
#include<conio.h>
main()
{
	char i;
	clrscr();
	printf("Alphabets(a to z): \n");
	i='a';
	do
	{
	    printf("%c  ",i);
	    i++;
	}
	while(i<='z');
	getch();
}