#include<stdio.h>

int strlength(char a[])
{
	return strlen(a);
}

void main()
{
	char a[15];
	
	printf("Enter any string: ");
	gets(a);
	
	printf("\nLength of string: %d",strlen(a));
	
}

