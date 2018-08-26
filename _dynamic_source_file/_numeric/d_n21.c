/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  // Custom header File

void n21(int r,int c)  // Function name
{
	int row,i,col,count=1,rw,cl,rem=1;
//	printf("enter the number of row");
//	scanf("%d",&r);
//	printf("enter the number of column");
//	scanf("%d",&c);
	for(row=r;row>=1;row--)//run the loop of row from user entered row number to 1
	{
	rw=r;cl=1; //initializing counter rw with number of row & cl to 1.They will be compared with row and column.
		for(col=1;col<=c;col++)
		{
			if((abs(rw)==row)&&(abs(rw)!=0)&&(cl==col)) //check if absolute of rw is equal to row & not equal to 0 & cl counter is equal to column count,
			printf(" %d",col);
			else if(rw==0)//when rw =0 hold it for 0 value as it will be decremented at the end and we have skipped it in previous if
			{			//NOTE:value when rw=0 wil never be printed as it will become -1 in the end.
			rw=0;
			cl--;//decrement of cl counter and column to synchronized with rw=0
			col--;
			}
			else
			printf("  ");
			rw--;
			if(abs(rw)==r+1)  //when one phase of absolute is completed then at the end value of absolute rw(-rw-1) will be r+1 
			{rw=r;  //initializing rw=r again
				}
			cl++;
		}
		
		printf("\n");
	
	}
	

  
}
