/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  // Custom Header File





int n10(int n)
{
	int i,j,k,c=1;
//	printf("enter the value of row");
//	scanf("%d",&n);
   	while(c<=n)
	{
 	for(i=n;i>=1;i--)
   		{
      			for(j=1;j<=i;j++)
      				{
      				printf(" ");
    				}
    			for(k=1;k<=(c*2)-1;k++)
    				{
					if((k==1)||(k==(c*2)-1))
    					printf("%d",c);
    				else
           			 	printf(" ");
    				}
    	printf("\n");
    	c++;
    	}
	}
 c=n-1;
	for(i=n;i>=1;i--)
    {
        for(j=n+1;j>=i;j--)
        {
        printf(" ");
    	}
    	for(k=(c*2)-1;k>=1;k--)
    	{
		if((k==1)||(k==(c*2)-1))
    		printf("%d",c);
    	else
            printf(" ");
    	}
    	c--;
    	printf("\n");
    }  
}
