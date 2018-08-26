/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //ustom Header File

void n12(int row)  // Function Name
{
 	int i,j;

 	// printf("Enter the number of rows you want: \n");
 	// scanf("%d",&row);
 	
 	for(i=row;i>=1;i--)
 	{
  		for(j=1;j<=i;j++)
  		{
   			printf("%d",j);
  		}
  		
  		for(j=row-1;j>=1;j--)
    	{
   			if(j<i)
				printf("%d",j);
    	  	else if(j==i)
				printf(" %d",j);
      		else
				printf("  ");
   		}	 
   			printf("\n");
	}
 
}
