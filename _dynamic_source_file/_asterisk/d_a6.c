/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File

void a6(int n)  //Function Name

{
		int i,j,k;
		// printf("enter the number rows");
		// scanf("%d",&n);
		
		for(i=1;i<=n;i++)
			{
					for(j=1;j<=n;j++)
					{
						if(j<=(n-i))
							printf(" ");
							
						else
							printf("* ");	
					}
				printf("\n");
		}
		
		for(i=n+1;i<(2*n);i++)
			{
					for(j=n+1;j<=(2*n);j++)
					{
						if(j<=i)
							printf(" ");
						else
							printf("* ");
					}
					printf("\n");
			}
}
