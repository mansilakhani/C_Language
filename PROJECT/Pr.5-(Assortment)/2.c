//To find second largest number in array.

#include<stdio.h>
main()
{
	int i,n,small,k;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(small<a[i])
		{
			k=small;
			small=a[i];
		}
		else if(k<a[i] && a[i]!=small)
		{
			k=a[i];
		}
	}
	printf("\nSecond Smallest Element in the given Array: %d", k);
 }
