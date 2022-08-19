#include<stdio.h>
main()
{
	int i,n,t1,t2;
	int s=t1+t2;
	printf("Enter the value: ");
	scanf("%d",&n);
	printf("Fibonacci series:%d,%d",t1,t2);
	for(i=3;i<=n;i++)
	{
	   
	   printf("%d",s);
	   t1=t2;
	   t2=s;
	   n=t1;
	}
}
