#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter the three values: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	{
	  printf("All values are same.");
	}
	else
	{
	 if(a<b)
	{
		if(a<c)
		{
		     printf("a is min");
		}
		else
		{
		     printf("c is min");
		}
	}
	else
	{
		if(b<c)
		{
		   printf("b is min");
		}
		else
		{
		   printf("c is min");
		}
	}
      }
    getch();
}