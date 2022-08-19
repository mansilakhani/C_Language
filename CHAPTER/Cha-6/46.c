#include<stdio.h>
main()
{
	int i,j;
	int x=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 || j==5 || (j==x || j==5-x+1) && i<=5/2+1)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		x++;
		printf("\n");
	}
}
