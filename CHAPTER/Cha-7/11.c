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
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Inner boundary: \n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
		   printf("%d",a[i][j]);
		}
			printf("\n");  
	}

}
