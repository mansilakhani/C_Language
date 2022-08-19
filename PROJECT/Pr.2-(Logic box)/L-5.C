#include<stdio.h>
#include<conio.h>
main()
{
	int unit;
	float t_amt,s_charge,amt;
	
	printf("Enter total unit consumed: ");
	scanf("%d",&unit);
	if(unit<=50)
	{
		amt=unit*0.50;
	}
	else if(unit<=150)
	{
		amt=(50*0.50)+(unit-50)*0.75;
	}
	s_charge=amt*0.20;
	t_amt= amt+s_charge;
	printf("Electricity bill: %.2f",t_amt);
	getch();
}
