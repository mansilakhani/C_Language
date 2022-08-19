#include<stdio.h>
main()
{
	int i,n;
	printf("Enter array elements: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nArray element of a: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n\n");
	int b[n];
	for(i=0;i<n;i++)
	{
		printf("b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	printf("\nArray element of b: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
	printf("\n");
	printf("\nAdditon of two matrix: \n");
	int c[n];
	for(i=0;i<n;i++)
	{
	     c[i]=a[i]+b[i];
	}
		for(i=0;i<n;i++)
	{
	     printf("%d ",c[i]);
	}
	
}
