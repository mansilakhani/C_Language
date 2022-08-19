#include<stdio.h>
main()
{
   
	int i,n;
 	printf("How many Elements You want to store in Array : ");
    scanf("%d", &n);
    printf("\nEnter array Elements: \n", n);
    int a[n];
    for(i=0; i<n; i++)
    {
    	printf("a[%d]: ",i);
		scanf("%d", &a[i]);
	}
    printf("\nArray Elements: \n");
    for(i=0; i<n; i++)
    {
    	 printf("a[%d]: %d\n",i, a[i]);
	}
}
