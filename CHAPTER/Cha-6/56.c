#include<stdio.h>
main()
{
	int i,j;
	int x=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=10;j++)
		{
			if(j==1 || j==2*5-1|| j==x || j==2*5-x)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
		x--;
	}
}
