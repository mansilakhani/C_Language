#include<stdio.h>
main()
{
	int i;
	char a[1000];
	printf("Enter any string: ");
	gets(a);
	for(i=0;i<a[i];i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			a[i]=a[i]+32;
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			a[i]=a[i]-32;
		}
	}
	printf("Toggle case: %s",a);
}


