#include<stdio.h>
main()
{
	int i,j,r,c,sum=0,num;
	printf("How many rows: ");
	scanf("%d",&r);
	printf("How many cols: ");
	scanf("%d",&c);
	printf("\nEnter Size of array : \n");
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
		}
		printf("\n");
	}
	printf("\nColumns number: ");
	scanf("%d",&num);
	for(i=0;i<r;i++)
		{
			sum=sum+a[i][num-1];
		}
	printf("\nSum of columnwise: %d\n",sum);
	
}
