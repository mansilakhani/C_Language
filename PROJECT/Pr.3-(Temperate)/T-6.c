#include<stdio.h>
main()
{
	int n,i;
	printf("Enter the value: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
	   if(n%i==0)
	   {
	   	 i++;
	   }
	}
	if(i==2)
	{
		printf("Not prime number");
	}
	else
	{
		printf("Prime number");
	}
}
