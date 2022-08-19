#include<stdio.h>
main()
{
	char a[1000];
	printf("Enter password: ");
	gets(a);
	
	check(a);
}
    check(char a[])
    {
    	char c;
    	int len,i,k1=0,k2=0,k3=0,k4=0;
    	len=strlen(a);
    	if(len<6)
    	{
    	   k1=1;	
		}
		else
		{
			for(i=0;i<len;i++)
			{
				if((a[i]>=48 && a[i]<=58))
				{
					k2=0;
					break;
				}
				else
				{
					k2=1;
				}
			for(i=0;i<len;i++)
			{
				if((a[i]>=65 && a[i]<=90))
				{
					for(i=0;i<len;i++)
					{
						if((a[i]>=65 && a[i]<=90))
						{
							k3=0;
							break;
						}
						else
						{
							k3=1;
						}
					}
						for(i=0;i<len;i++)
						{
							if(a[i]>=32 && a[i]<=45 || a[i]==65)
							{
								k4=0;
								break;
							}
							if((k1==1||k2==1||k3==1||k4==1))
							{
								printf("Wrong password\n");
							}
							else
							{
								printf("Successfull password\n");
							}
		}
			
		}
		}//Error...............................
			}
		}
	}
