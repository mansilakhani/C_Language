#include<stdio.h>
main()
{
	int n=7;
	int x=n-n/2+1;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(((i==1 || i==x+1) && j<=x+1) || ((j==1 || j==x+1) && i<=x+1))
			{
				printf(" *");
			}
			else if(j==i && i>=x)
			{
				printf("* ");
			}
			else 
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
