#include<stdio.h>
main()
{
	char Ch;
	printf("Enter any alphabets: ");
	scanf("%c",&Ch);
	if(Ch)
	{
		if(Ch>=65 && Ch<=90)
		{
			Ch=Ch+32;
			printf("\nLower case of character:%c",Ch);
		}
		else
		{
			printf("You already entered lowercase\n");
		}
	}
	else
	{
		printf("Character is not alphabet\n");
	}
}
