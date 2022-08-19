#include<stdio.h>
main()
{
	char Ch;
	printf("Enter any alphabets: ");
	scanf("%c",&Ch);
	if(Ch)
	{
		if(Ch>=97 && Ch<=122)
		{
			Ch=Ch-32;
			printf("Upper case of character:%c",Ch);
		}
		else
		{
			printf("You already entered uppercase\n");
		}
	}
	else
	{
		printf("Character is not alphabet\n");
	}
}
