/* Steps to run this file 

1. Replace the custom header file with standard header files required for the program.
2. Replace the function name with the main function and remove the parameter as well.
3. Remove the comments from printf and scanf statements.
4. Run the program.

*/

#include"medium.h"  //Custom header file

void al8(int n)  // Function name
{
   int i, j, k;
   int blank = 0;
   char symbol = 'A';
   int temp;
   int diff[7] = { 0, 1, 3, 5, 7, 9, 11 };
   k = 0;
   //Step 0


	// printf("Enter number of rows");
	// scanf("%d",&n);
	
	
   for (i = n; i >= 0; i--) 
   {
      printf("\n ");
      symbol = 'A';

      //step 1
      for (j = i; j >= 0; j--) 
	  {
         printf("%c", symbol++);
      }

      //step 2
      blank = diff[k++];

      //step 3 - Double space
      for (j = 0; j < blank; j++) 
	  {
         printf(" ");
      }

      symbol = 'F' - (blank / 2);

      if (blank == 0)
	   {
         temp = i - 1;
       } 
	   else 
	   {
         temp = i;
       }

      for (j = 0; j <= temp; j++) 
	  { //step 4
         printf("%c", symbol--);
      }

   }
   
}
