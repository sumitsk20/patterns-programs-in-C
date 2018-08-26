/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"   //Custom Header File

int i,j,k,l; 

void a5(int n)  //Function name
{
	// printf("enter the value of row to be printed");
	// scanf("%d",&n);
	
	
	for (i=1;i<=n;i++)
	{
		for(j=1;j<n*2;j++)
		{ 
			k=i+j;l=j-i;
			
			if((j>=i)&&((i+j)<=(n*2))&&i>(n/2))
				printf("  ");
			else if (k>n && l<n)
				printf(" *");
			else printf("  ");
		
		}
		printf("\n");
	}
}
