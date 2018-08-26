/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom Header File

void a13(int r,int c)  // Function name
{
    int row,col,i,count=1,rw,cl,rem=1;
//	printf("enter the number of row");
//	scanf("%d",&r);
//	printf("enter the number of column");
//	scanf("%d",&c);
	for(row=1;row<=r;row++)
	{rw=r;cl=1;
		for(col=1;col<=c;col++)
		{
			if((abs(rw)==row)&&(abs(rw)!=0)&&(cl==col))
			printf(" *");
			else if(rw==0)
			{			//NOTE:value when rw=0 wil never be printed as it will become -1 in the end.
			rw=0;
			cl--;//decrement of cl counter and column to synchronized with rw=0
			col--;
			}
			else
			printf("  ");
			rw--;
			if(abs(rw)==r+1)
			{rw=r;
				}
			cl++;
		}
		
		printf("\n");
	
	}

}



