#include<stdio.h>
main()
{
	char a[100];
	int i;
	printf("Enter any string: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>=97 && a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	printf("String of upper case: %s",a);
}


