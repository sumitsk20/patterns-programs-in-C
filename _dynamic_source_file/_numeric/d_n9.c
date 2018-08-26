/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  // Custom header File

void n9(int n)  // Function name
{
	int i,j=1,count=1;
	// printf("enter the value of row");
	// scanf("%d",&n);

  for(i=1;i<=n;i++)
    {
        for(j=3;j>=1;j--)
        {
       
        if( ((i+j)%4==0) || ( (i%2==0)&&(i+j)%i==2 ) ) //try to dry run for better understanding.
        printf("%3d",count++);
        else
        printf("   ");
    }
            printf("\n");
    }

  
}
