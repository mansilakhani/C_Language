#include <stdio.h>

main()
{
  	char s[100];
  	int i, j, k;
 
  	printf("Enter any String :  ");
  	gets(s);
  	 	
  	for(i = 0; i < strlen(s); i++)
  	{
  		for(j = i + 1; s[j] != '\0'; j++)
  		{
  			if(s[j] == s[i])  
			{
  				for(k = j; s[k] != '\0'; k++)
				{
					s[k] = s[k + 1];
				}
 			}
		}
	}
	printf("\nString after removing all duplicate character = %s ", s);
}

