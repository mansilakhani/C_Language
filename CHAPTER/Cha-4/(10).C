#include<stdio.h>
#include<conio.h>
main()
{
	int choice,select;
	clrscr();
	printf("Namaskar\n\nWelcome To HDFC Bank\n\n");
	printf("Press 1 for English : \n");
	printf("Press 2 for Hindi : \n");
	printf("Press 3 for Gujarati : \n\n");
	printf("Enter your choice : \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Dial 1 for detail on bank account,credit card and other services\n");
			printf("Dial 2 for report loss or damage of card\n\n");
			printf("Enter your select option: ");
			scanf("%d",&select);
			switch(select)
			{
				case 1:
					printf("You selected for detail on bank account,credit card and other services\n");
					break;
				case 2:
					printf("You selected for report loss or damage of card\n\n");
					break;
				default:
					printf("Invalid selected");
					break;
			}
			break;

		case 2:
			printf("Bank account ,credit card ya any sevaon ke vivaran ke lie daayal 1 karena hai\n");
			printf("card ke kho jaane ya nukasan hone kee report ke lie daayal 2 karena hai\n\n");
			printf("Enter your select option: ");
			scanf("%d",&select);
			switch(select)
			{
				case 1:
					printf("Aapane bank khaate,credit card aur any sevaon ke lie chayan kiya hai\n");
					break;
				case 2:
					printf("Aapane report ke nukasaan ke lie chuna hai card\n\n");
					break;
				default:
					printf("Invalid selected");
					break;
			}
			break;

		case 3:
			printf("Bank account ,credit card athava anya sevaoni vigate mate 1 daayal karo\n");
			printf("Card khota athava nukasanani jana karava mate 2 daayal karo\n\n");
			printf("Enter your select option: ");
			scanf("%d",&select);
			switch(select)
			{
				case 1:
					printf("Tame bank account,credit card para vigato mate pasand karyu che\n");
					break;
				case 2:
					printf("Tame card khota athava nukasanani jana karava mate pasand karyu che\n\n");
					break;
				default:
					printf("Invalid selected");
					break;
			}
			break;
		default:
			printf("Invalid choice");
			break;

	}
	    getch();

}
