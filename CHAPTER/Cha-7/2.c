#include<stdio.h>
main()
{
	int i,n,count=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("\nEnter array elements: \n");
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nArray elements: \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		count++;
	}
	printf("\n\nLength of array:%d \n",count);
}
