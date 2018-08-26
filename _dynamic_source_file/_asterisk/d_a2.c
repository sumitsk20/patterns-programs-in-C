/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"   // Custom Header File

int i,j,l,x;

void a2(int n)  // Function Name
{
	// printf("enter the value of n");
	// scanf("%d",&n);
		
	for(i=1;i<=n;i++)
  	{
    	for(j=1;j<=n-i;j++)
    	{	
			printf("%d",j);
    	}

		for(l=1;l<=i;l++)
	
			printf("*");

    	printf("\n");
	
  	}	

}
