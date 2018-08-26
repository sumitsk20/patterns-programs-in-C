/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File

int row,i,col,count=1,rw,rw2,cl,rem=1;

void a4(int r)  //Function Name

{
	
	/*
		printf("enter the number of row");
		scanf("%d",&r);
	*/
	if(r%2==0)
	r=r+1;
	for(row=1;row<=r;row++)
	{
	;
		
		for(col=1;col<=r;col++)
		{
			if(row==col || row+col==r+1)
			printf(" *");
			
			else
				printf("  ");
			
		}
		
		printf("\n");
	
	}
	
}
