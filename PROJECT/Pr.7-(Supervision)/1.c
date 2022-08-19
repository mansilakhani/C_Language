#include<stdio.h>

int fact1(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact1(n-1);
	}
}

int fact2(int m)
{
	if(m==1)
	{
		return 1;
	}
	else
	{
		return m*fact2(m-1);
	}
}

void main()
{

	printf ("Factorial 1: %d\n",fact1(5));
	printf ("Factorial 2: %d",fact2(6));
	
}
