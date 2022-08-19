#include<stdio.h>
main()
{
	char a[100];
	
	printf("Enter your password: ");
	scanf("%s",a);
	
	check(a);
}
	check(char a[])
	{
		 char c;
		 int len,i,flag1=0,flag2=0,flag3=0,flag4=0;
		 len=strlen(a);
			
		 if(len<6)
		 flag1=1;
		 
		 else
		 {
		 	for(i=0;i<len;i++)
		 	
		 		if((a[i]>48 && a[i]<=58))
		 		{
		 			flag2=0;
		 			break;
				}
				else
				flag2=1;
				
				for(i=0;i<len;i++)
				
					if((a[i]>=65 && a[i]<=90))
					{
						for(i=0;i<len;i++)
						{
							if((a[i]>=-65 && a[i]<=90))
							{
								flag3=0;
								break;
							}
							else
							flag3=1;
							
							for(i=0;i<len;i++)
							{
								if(a[i]>=32 && a[i]<=47 || a[i]==64)
								{
									flag4=0;
									break;
								}
								else
								flag4=1;
							}
						}
						   if(flag1==1 || flag2==1 || flag3==1 || flag4==1)
						   {
						   	    printf("\nWrong password\n");
						   }
						   else
						   {
						   	     printf("Your password is successfully created\n");
						   }
								
						}
					}
				}
			
		 

