#include<stdio.h>
main()
{
	int i,j;
	int x=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=2*5;j++)
		{
			if(j==x || j==2*5-x)
			{
			   printf("* ");	
			}
			else
			{
			   printf(" ");	
			}
		}
		printf("\n");
		x++;
	}
}
