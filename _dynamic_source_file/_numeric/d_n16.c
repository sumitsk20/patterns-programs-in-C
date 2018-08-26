/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  // Custom header File

void n16(int n)  // Function name
{
	int i,j;
	// printf("enter the value of row");
	// scanf("%d",&n);

  for (i=1;i<=n;i++) 
  {
		for (j=1;j<=i;j++) 
		{
			if(j<i) 
			        printf("%d*",i); 
			else 
			        printf("%d",i);
		}
		printf(" \n");
	}
	for (i=n;i>=1;i--) 
	{
		for (j=1;j<=i;j++) 
		{
			if(j<i) 
			        printf("%d*",i); 
			else 
			        printf("%d",i);
		}
		printf(" \n");
	}

  
}
