#include <stdio.h>
 
main()
/*{
    char a[1000];  
    int  i,j,k,count=0,n;
 
    printf("Enter  the string : ");
    gets(a);
     
    for(j=0;j<a[j];j++);
	 n=j; 
    
	printf("\nfrequency count character in string:\n");
 
    for(i=0;i<n;i++)  
    {
     	count=1;
    	if(a[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(a[i]==a[j])
    	    {
                 count++;
                 a[j]='\0';
	     	}
	      }  
	      printf(" '%c' = %d \n",a[i],count);
 	  }
	   
	} 
}*/
{
	 char a[1000],j;
	 int count=0,i;
	 printf("Enter any string: ");
	 gets(a);
	

	 for(j=0;j<=a;j++)
	 {
	 	count=0;
	 	for(i=0;a[i]!=NULL;i++)
	 	{
	 		if(j==a[i])
	 		{
	 			count++;
			}
		}
		printf("\nfrequency count character in string:\n");
		if (count>0)
		printf("%c found in %d times\n",j,count);
	 }
}
