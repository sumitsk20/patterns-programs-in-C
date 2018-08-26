/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include "medium.h"

void al5(int n)
{
    int i, j;
    
    //printf("enter number of rows");
	//scanf("%d",&n);

    
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c", 'A'-1 + j);
        }
        printf("\n");
    }
    
}

