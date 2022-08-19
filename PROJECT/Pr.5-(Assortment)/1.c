// Print all negative elements in array.

#include<stdio.h>
main()
{
	int i,n;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("\nEnter array elements: \n");
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\nNegative elements of array: \n");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
	 		printf("a[%d]: %d\n",i,a[i]);	/*printf("%d",a[i]);*/
		}
	
	}
}
