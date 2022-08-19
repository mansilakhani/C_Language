#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter any 3 value: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("All values are same");
	}
	else
	{
		if(a>b)
		{
			if(a>c)
			{
				printf("a is max");
			}
			else
			{
				printf("c is max");
			}
		}
		else
		{
			if(b>c)
			{
				printf("b is max");
			}
			else
			{
				printf("c is max");
			}
		}
	}
	getch();

}