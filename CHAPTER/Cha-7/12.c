#include<stdio.h>
main()
{
	int i,j,r,c,sum=0,num;
	printf("How many rows: ");
	scanf("%d",&r);
	printf("How many cols: ");
	scanf("%d",&c);
	printf("Enter size of array: \n");
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
	printf("\nRow number: ");
	scanf("%d",&num);
	for(j=0;j<c;j++)
		{
		  sum=sum+a[num-1][j];
		}
		printf("\nSum of rowise: %d",sum);
}
