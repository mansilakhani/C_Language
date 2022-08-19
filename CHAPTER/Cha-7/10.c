#include<stdio.h>
main()
{
	int i,j;
	printf("Enter 5*5 matrix: \n");
	int a[5][5];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Array elements: \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Boundary element: \n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if((i==0 )|| (j==0)|| (i==4)|| (j==4))
			{
				printf("%d",a[i][j]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
