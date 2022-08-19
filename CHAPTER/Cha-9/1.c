#include<stdio.h>

void addition(int n ,int m)
{
	printf("Add: %d\n\n",n+m);
}
void Subtraction(int n ,int m)
{
	printf("Sub: %d\n\n",n-m);
}
void Multiplication(int n ,int m)
{
	printf("Mult: %d\n\n",n*m);
}
void Division(float n ,float m)
{
	printf("Div: %.2f\n\n",n/m);
} 
void Modulus(int n ,int m)
{
	printf("Mod: %d\n\n",n-(n/m)*m);
} 
void main()
{
	int a,b,choice;
	do
	{
	printf("Press 1 for Addition\n");
	printf("Press 2 for subtraction\n");
	printf("Press 3 for Multiplication\n");
	printf("Press 4 for Division\n");
	printf("Press 5 for Modulus\n");
	printf("Press 0 for exit\n");
	
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			    printf("\nEnter value of a: ");
			    scanf("%d",&a);
			    printf("Enter value of b: ");
			    scanf("%d",&b);
			    addition(a,b);
			    break;
			    
		case 2:
			    printf("\nEnter value of a: ");
			    scanf("%d",&a);
			    printf("Enter value of b: ");
			    scanf("%d",&b);
			    Subtraction(a,b);
			    break;
			    
		case 3:
			    printf("\nEnter value of a: ");
			    scanf("%d",&a);
			    printf("Enter value of b: ");
			    scanf("%d",&b);
			    Multiplication(a,b);
			    break;
			    
		case 4:
			    printf("\nEnter value of a: ");
			    scanf("%d",&a);
			    printf("Enter value of b: ");
			    scanf("%d",&b);
			    Division(a,b);
			    break;
			    
		case 5:
			    printf("\nEnter value of a: ");
			    scanf("%d",&a);
			    printf("Enter value of b: ");
			    scanf("%d",&b);
			    Modulus(a,b);
			    break;
		case 0:
		       break;	
		default:
			printf("\nInvalid choice.\n\n");
		}	
	}
	while(choice!=0);
}
