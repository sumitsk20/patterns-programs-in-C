/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File



void n11(int n)  //Function Name
{
int i,j,k,d=1;
	//	printf("enter the number of rows in pattern");
	//  scanf("%d",&n);
	
	
	if(n%2==0)
	{
		n=n+1;}
		for(i=1;i<=n;i++)
  		{	
    		for(j=1;j<=n;j++)
    		{
    			if(i==j || i+j==n+1)
					printf("%3d",d);
				else
					printf("   ");
			
    		}
    		
    		if(i<=n/2)
				{d++;}
			else
				{d--;}
   			 printf("\n");
  		}
	}

