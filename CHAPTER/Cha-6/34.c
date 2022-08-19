#include<stdio.h>
main()
{
	int i,j,x=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<10;j++)
		{
			if(j==x || j==5+i-1)
			{
				printf("* ");
			}
			else if(j>=x && j<=5+i-1 && i==5/2+1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
		x--;
	}
}
