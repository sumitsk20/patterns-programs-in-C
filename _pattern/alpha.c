#include"medium.h"

void alpha()
{
	system("cls");
	int c,x,i;
			gotoxy(25,0);printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
 		gotoxy(25,1);printf("\xba");gotoxy(50,1);printf("\xba");
 		gotoxy(25,2);printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
		gotoxy(29,1);printf("Alphabetic Patterns");
				printf("\n\nPattern 1.\n");al1(4);
				printf("\n\nPattern 2.\n");al2(4);
				printf("\n\nPattern 3.\n");al3(4);
				printf("\n\nPattern 4.\n");al4(4);
				printf("\n\nPattern 5.\n");al5(4);
				
				printf("\n\nPattern 6.\n");al6(4);
				printf("\n\nPattern 7.\n");al7(4);
				printf("\n\nPattern 8.\n");al8(4);
				printf("\n\nPattern 9.\n");al9(4);
				printf("\n\nPattern 10.\n");al10(4);
				printf("\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
				printf("\t\t\t\xdb\xdb** Press ESC to GO BACK **\xdb\xdb\n\t\t\t\xdb\xdb** Press ENT to CONTINUE**\xdb\xdb\n");
				printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
						
				if(getch()==27)
				{Beep(600,150);
  				main_menu();}
  				Beep(300,150);
  				printf("\n\n\t\t\t Enter Index Number of Pattern : ")	;
				scanf("%d",&c);
				Beep(300,150);
				
				switch(c)
				{
					case 1:
						{
							while(1)
							{
							option(3,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							al1(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;

						}
						
					case 2:
						{
							while(1)
							{
							option(3,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							al2(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
					
					case 3:
						{
							while(1)
							{
							option(3,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							al3(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
						
					case 4:
						{
							while(1)
							{
							option(3,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							al4(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
						
					case 5:
						{
							while(1)
							{
							option(3,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							al5(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
						
					case 6:
						{
							while(1)
							{
							option(3,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							al6(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
						
					case 7:
						{
							while(1)
							{
							option(3,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							al7(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
						
					case 8:
						{
							while(1)
							{
							option(3,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							al8(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
					
					
					case 9:
						{
							while(1)
							{
							option(3,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							al9(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
					
					case 10:
						{
							while(1)
							{
							option(3,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							al10(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
						
					default:
						{
							system("cls");
							printf("\n\n\t\tNo Pattern Exist Corresponting to this Index Number.\n\t\t\tPRESS ANY KEY TO SELECT AGAIN");
							Beep(500,600);
							getch();
							Beep(300,150);
							system("cls");	
							alpha();			
							break;
						}
						
				}
}
				

