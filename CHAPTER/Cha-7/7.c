#include<stdio.h>
main()
{
	int i,j,r,c,count=0;
	printf("How many rows: ");
	scanf("%d",&r);
	printf("How many cols: ");
	scanf("%d",&c);
	printf("\nEnter Array elements: ");
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nArray elements: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
			count++;
		}
		printf("\n");
	}
	
	printf("\nLength of array elements: %d",count);
}

