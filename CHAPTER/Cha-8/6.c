#include<stdio.h>
main()
{ 
	int i;
	char str[100];
	printf("Enter any string: \n");
	gets(str);
	for(i=0;i<str[i];i++)
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
	}
	printf("\nString in titlecase: \n");
	str[0]=str[0]-32;
	for(i=1;i<str[i];i++)
	{
		if(str[i]==' ')
		{
			str[i+1]=str[i+1]-32;
		}
	}
	printf("%s",str);
		
}
