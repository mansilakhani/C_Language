#include<stdio.h>
main()
{
	int i,j,n,sum=0;
	printf("How many rows and columns: ");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		   if(i==j || i+j==n-1)
		   {
		   		sum=sum+a[i][j];
			}	
		}
	}
	printf("Sum of diagonal and antidiagonal: %d",sum);
}
}
