#include<stdio.h>
#include<conio.h>
main()
{
	char month;
	clrscr();
	printf("Enter months: ");
	scanf("%c",&month);
	switch(month)
	{
		case 'j':
			printf("January");
			break;
		 case 'f':
			printf("February");
			break;
		 case 'm':
			printf("March");
			break;
		 case 'a':
			printf("April");
			break;
		 case 'y':
			printf("May");
			break;
		 case 'p':
			printf("April");
			break;
		 case 'l':
			printf("July");
			break;
		 case 'u':
			printf("June");
			break;
		 case 'g':
			printf("August");
			break;
		 case 's':
			printf("September");
			break;
		 case 'o':
			printf("October");
			break;
		 case 'n':
			printf("November");
			break;
		 case 'd':
			printf("December");
			break;
		 default:
			printf("Wrong input");
	}
	getch();
}