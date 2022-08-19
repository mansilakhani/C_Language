#include<stdio.h>
main()
{
	int i,j,r,c,sum=0;
	printf("How many rows: ");
	scanf("%d",&r);
	printf("How many cols: ");
	scanf("%d",&c);
	printf("\nEnter array elements: \n");
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nArray element:  \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   if(i==j)
		   {
		   	sum=sum+a[i][j];
		   }
		}
	}
	printf("\nSum of Diagonal: %d",sum);
}


