#include<stdio.h>
main()
{
	int i,j,r,c;
	printf("How many rows: ");
	scanf("%d",&r);
	printf("How many cols: ");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("Array element: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
