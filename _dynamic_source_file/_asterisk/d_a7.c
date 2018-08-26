/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File

void a7(int n)  //File Name
{
 	int i,j;
 	// printf("Enter number of rows ");
 	// scanf("%d",&n);
 	if(n%2==0)
  	n++;
 	for(i=0;i<n;i++)
 	{
  		for(j=0;j<n;j++)
  		{
 			if(i==0&&(j>=n/5&&j<=n/2-n/5)||i==0&&(j>=n/2+n/5&&j<=(n-1)-n/5))
    			printf("* ");
  			else if(i>0&&i<=n/5&&(j==n/5-i||j==n/2+n/5-i||j==n/2-n/5+i||j==(n-1)-n/5+i))
    			printf("* ");
   			else if((i>n/5&&i<=n/2)&&(j==0||j==n-1))
    			printf("* ");
   			else if(i>n/2&&(j==i-n/2||j==(n-1)-(i-n/2)))
    			printf("* ");
   			else
    			printf("  ");
 		 }
 	 printf("\n");
 	}

}
