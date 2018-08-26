/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File

void a9(int n)  //File Name
{
 	int i,j,k;
 	
 	// printf("Enter number of rows ");
 	// scanf("%d",&n);
 	
 	for (i=1; i<=n; i++) 
	 {
		for (k=i; k<=n; k++) 
		{
			printf(" ");
		}
		for (j=0; j< i; j++) 
		{
			printf("*");
		}
		printf("\n");
	}

	for (i=n-1; i>=1; i--) 
	{
		for (k=i; k<=n; k++) 
		{
			printf(" ");
		}
		for (j=i; j>=1; j--) 
		{
			printf("*");
		}
		printf("\n");
	}

}
