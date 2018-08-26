/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File

	
	
	void n14(int n)  // Function Name
	{
		int col,row,k;
		// printf("enter the number of loops");
		// scanf("%d",&n);
	
		for(row=1;row<=n*2-1;row++)// Dry run this code for better understanding
		{	
			k=n;
			for(col=1;col<=n*2-1;col++)
			{
			
				if((row<=n)&&(col>=row)&&(col<=n*2-row))
					printf(" %d",k);
		
				else if((row>n)&&(row+col>=n*2)&&(row*col<=row*row))
					printf(" %d",k);
		
				else if(row>col)
					printf(" %d",k--);
		
				else
					{k=k+1;
					printf(" %d",k);}
			}
			printf("\n");
		}
	
	}	
