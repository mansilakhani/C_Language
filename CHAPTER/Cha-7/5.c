#include<stdio.h>
main()
{
	int i,n1,n2,n3,k;
	printf("Enter Size of array 1: ");
	scanf("%d",&n1);
	printf("\nEnter Elements of array 1: \n");
	int a[n1],b[n2],c[n3];
	for(i=0;i<n1;i++)
	{
		printf("a[%d]: ",i,a[i]);
		scanf("%d",&a[i]);
		c[i]=a[i];
		
	}
	k=i;
	printf("\nEnter Size of array 2: ");
	scanf("%d",&n2);
	printf("\nEnter Elements of array 2: \n");
	for(i=0;i<n2;i++)
	{
		printf("b[%d]: ",i,b[i]);
		scanf("%d",&b[i]);
		c[k]=b[i];
		k++;
	}
	printf("\nNew array after merging: \n");
	for(i=0;i<k;i++)
	{
	   printf("%d ", c[i]);
	}
}
	
	
	

