#include<stdio.h>
#include<conio.h>
main()
{
	int s,ans;
	float h,d,t;
	clrscr();
	printf("Base salary:  ");
	scanf("%d",&s);
	h=0.1*s;
	printf("HRA= %.2f\n",h);
	d=0.05*s;
	printf("DA= %.2f\n",d);
	t=0.08*s;
	printf("TA= %.2f\n",t);
	ans=h+d+t+s;
	printf("Total Salary: %d",ans);
	getch();
}
