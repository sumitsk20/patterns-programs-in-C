/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File

void n4(int n)  // Function Name
{
	int i,j,k;
	//	printf("enter the value of n");
	//	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
 	{
		j=i;
		for (k=1;k<=i;k++)
		 {
			printf(" %d",j++);
		}
		printf("\n");
	}
}
