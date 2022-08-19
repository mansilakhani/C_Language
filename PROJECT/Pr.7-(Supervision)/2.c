#include<stdio.h>

int Sum(int a[] ,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}

void main()
{
	int i,n,sum=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	int a[n];
	printf("\nArray elements: \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	sum = Sum(a,n);
	printf("\nSum of all array: %d",sum);
	
}
