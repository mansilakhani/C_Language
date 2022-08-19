#include<stdio.h>
main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || i==1 || (i==5 || i>5/2 && j==5) || (i==(5/2+1) && j>5/2))
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
}
