#include<stdio.h>
#include<conio.h>
main()
{
	float a,b,c;
/*	clrscr();*/
	printf("Enter the value of a:  ");
	scanf("%f",&a);
	printf("Enter the value of b:  ");
	scanf("%f",&b);

	c=a+b;
	printf("\n");
	printf("* * * * * A D D * * * * *\n");
	printf("*\t\t\t*\n");
	printf("*\t%.1f+%.1f=%.1f\t*\n",a,b,c);
	printf("*\t\t\t*\n");
	printf("* * * * * * * * * * * * *\n");

	
	c=a-b;
	printf("\n");
	printf("* * * * * S U B * * * * *\n");
	printf("*\t\t\t*\n");
	printf("*\t%.1f-%.1f=%.1f\t*\n",a,b,c);
	printf("*\t\t\t*\n");
	printf("* * * * * * * * * * * * *\n");
	
	
	c=a*b;
	printf("\n");
	printf("* * * * * M U L * * * * *\n");
	printf("*\t\t\t*\n");
	printf("*\t%.1f*%.1f=%.1f\t*\n",a,b,c);
	printf("*\t\t\t*\n");
	printf("* * * * * * * * * * * * *\n");
	
	
	c=a/b;
	printf("\n");
	printf("* * * * * D I V * * * * *\n");
	printf("*\t\t\t*\n");
	printf("*\t%.1f/%.1f=%.1f\t*\n",a,b,c);
	printf("*\t\t\t*\n");
	printf("* * * * * * * * * * * * *\n");
	
	
	c=a/b;
	c=c*b;
	c=a-c;
	printf("\n");
	printf("* * * * * M O D * * * * *\n");
	printf("*\t\t\t*\n");
	printf("*\t%.1f%%%.1f=%.1f\t*\n",a,b,c);
	printf("*\t\t\t*\n");
	printf("* * * * * * * * * * * * *\n");
	getch();
		
}
