/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File
void n3(int n)  // Function Name
{
	// printf("enter the value of n");
	// scanf("%d",&n);
	int rw, c, no=1 ,len;
	for (rw=1; rw<=n; rw++) 
	{
		printf("\n");
		for (c=1; c<=rw; c++) 
		{
			printf(" %2d ", no);
			no++;
		}
	}

}

