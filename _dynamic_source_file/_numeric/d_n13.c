/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  // Custom Header File

	int c,row,i,j,n,k;
	void n13(int n)  // Function Name
	{
		// printf("enter the number of row");
		// scanf("%d",&n);
		
		for(row=1;row<=n;row++)
		{
			c=1;k=n;
			for(i=k;i>row;i--)
			{
			printf(" ");
			}
			k--;
		
			for(j=1;j<=row;j++)
			{
				printf(" %d",c);
				c=c*(row-j)/j;
			}
				printf("\n");
		}
	
	}	
