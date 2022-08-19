#include<stdio.h>
main()
{
	char remail[100],rpswd[100],lemail[100],lpswd[100];
	printf("\t\t\t\t\t\t--------------------------\n");
	printf("\t\t\t\t\t\t-------Registration-------\n");
	printf("\t\t\t\t\t\t--------------------------\n");
	 
	printf("\n\t\t\t\tEnter email: ");
	gets(remail);
	
	printf("\t\t\t\tEnter password: ");
	gets(rpswd);
	
	printf("\n\t\t\t\t\t\t\tRegister Now\n\n");
	printf("\n\t\t\t\t\t\t---------------------\n");
	printf("\t\t\t\t\t\t--------Login--------\n");
	printf("\t\t\t\t\t\t---------------------\n");
	 
	printf("\n\t\t\t\tEnter email: ");
	gets(lemail);
	
	printf("\t\t\t\tEnter password: ");
	gets(lpswd);
	 
	if(strcmp(remail,lemail)==0 && strcmp(rpswd,lpswd)==0)
	{
	 	printf("\t\t\t\tLogin successfull....");
	}
	else
	{
	 	printf("\n\t\t\t\tLogin failed.");
	}
}
