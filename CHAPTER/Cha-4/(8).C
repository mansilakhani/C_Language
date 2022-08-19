#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter the four numbers: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a==b && b==c && c==d)
	{
		printf("All values are same.");
	}
	else
	{
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("a is max");
			}
			else
			{
				printf("d is max");
			}
		}
		else
		{
			if(c>d)
			{
				printf("c is max");
			}
			else
			{
				printf("d is max");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("b is max");	
			}
			else
			{
				printf("d is max");
			}
			
		}
		else
		{
			if(c>d)
			{
				printf("c is max");
			}
			else
			{
				printf("d is max");
			}
		}
	}
  }
	getch();
}
