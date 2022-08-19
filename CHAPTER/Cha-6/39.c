#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || i==1 || i==5/2+1)
			{
				printf(" *");
			}
		}
		printf("\n");
	}
}
