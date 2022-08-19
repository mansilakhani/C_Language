#include<stdio.h>
main()
{
	int i,j;
	int x=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5/2+1;j++)
		{
			if(j==1 || i==1 || i==5/2+1 || (i<=5/2 && j==5/2+1) || j==x)
			{
			  printf("* ");	
			}
			else
			{
				printf("  ");
			}
		}
		if(i>5/2)
		{
			x++;
		}
		printf("\n");
	}
}
