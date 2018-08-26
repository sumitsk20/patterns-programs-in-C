#include"medium.h"

void heart()
{
 int n=18,i,j,freq=200;
// char ch=getch();
 
 system("cls");
 printf ("\n\n\n");
 system("color fc");
 if(n%2==0)
  n++;
 for(i=0;i<n;i++)
 {printf("\t\t");
 Beep(freq,150);
  for(j=0;j<n;j++)
  {
  //	Sleep(10);
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
  freq=freq+40;
  printf("\n");

 }
 Beep(400,200);
 printf("\nWe Love To Code		   We Love To Code		We Love To Code");
  Sleep(2000);
}
