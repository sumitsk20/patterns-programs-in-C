/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File

void a10(int n)  //File Name
{
 	int i,j;
 	// printf("Enter number of rows ");
 	// scanf("%d",&n);
	for(i=1;i<=n;i++)
 	{
 		 for(j=1;j<=n;j++)
  		{
   			if ( i==1 || i==n || j==1 || j==n )
   			{
   			printf("*");
  			}
  			else
   			printf(" ");

		}
		printf("\n");
	}
}
