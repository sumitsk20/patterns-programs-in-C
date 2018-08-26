/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File

void a14(int n)  //File Name
{
 	int i,j,k=1;
 	// printf("Enter number of nodes in dna :  ");
 	// scanf("%d",&n);
 	while(k<=n)
  	{
 		for(i=1;i<=5;i++)
 			{
  			for(j=1;j<=5;j++)
  				{
 				if((i==j)||(i+j)==(6))
 					{
 					printf("*");
 					}
 				else
 					{
					 printf(" ");
					 }
 				}
 				printf("\n");
 			}
		k++;
	}
}
