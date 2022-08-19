#include<stdio.h>
main()
{
	int i,n,average,sum=0;
	printf("Enter array elements: ");
	scanf("%d",&n);
	printf("Array elements: \n");
	int a[n];
	for(i=0;i<n;i++)
	{
	    printf("a[%d]:  ",i);
	    scanf("%d",&a[i]);
	    sum=sum+a[i];
	}
	for(i=0;i<n;i++)
	{
	    average =sum/n;
	}
	printf("Average : %d",average);
}
 
