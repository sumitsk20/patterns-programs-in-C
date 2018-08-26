/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  // Custom header File

void n20(int n)  // Function name
{
	int i,j,k;
	// printf("enter the value of row");
	// scanf("%d",&n);

 for(i=n;i>=1;i--)
  {
  	for(k=1;k<=i;k++)
  	{
  		printf("  ");
	  }
    for(j=i;j<=n;j++)
    {
    	printf("%d ",j);
	}
        printf("0 ");
    for(j=n;j>=i;j--)
    {
    	 printf("%d ",j);
	}
    printf("\n");
  }

  
}
