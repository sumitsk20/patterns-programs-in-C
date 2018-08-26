#include"medium.h"

void asterisk()
{
	system("cls");
int c,x,z,i;
		gotoxy(25,0);printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
 		gotoxy(25,1);printf("\xba");gotoxy(50,1);printf("\xba");
 		gotoxy(25,2);printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
		gotoxy(30,1);printf("Asterisk Patterns");
				printf("\n\nPattern 1.\n");a1(4);
				printf("\n\nPattern 2.\n");a2(4);
				printf("\n\nPattern 3.\n");a3(5);
				printf("\n\nPattern 4.\n");a4(4);
				printf("\n\nPattern 5.\n");a5(4);
				printf("\n\nPattern 6.\n");a6(4);
				printf("\n\nPattern 7.\n");a7(4);
				printf("\n\nPattern 8.\n");a8(4);
				printf("\n\nPattern 9.\n");a9(4);
				printf("\n\nPattern 10.\n");a10(4);
				printf("\n\nPattern 11.\n");a11(4);
				printf("\n\nPattern 12.\n");a12(4,20);
				printf("\n\nPattern 13.\n");a13(4,20);
				printf("\n\nPattern 14.\n");a14(2);
				printf("\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
				printf("\t\t\t\xdb\xdb** Press ESC to GO BACK **\xdb\xdb\n\t\t\t\xdb\xdb** Press ENT to CONTINUE**\xdb\xdb\n");
				printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
						
				if(getch()==27)
				{
					Beep(600,150);
  					main_menu();
				}
	
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
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a1(x);
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
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a2(x);
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
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a3(x);
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
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a4(x);
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
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a5(x);
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
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a6(x);
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
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a7(x);
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
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a8(x);
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
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a9(x);
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
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a10(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
					case 11:
						{
						while(1)
							{
							option(1,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a11(x);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}
					case 12:
						{
							while(1)
							{
							option(2,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							printf("enter the number of column in pattern : ");
							scanf("%d",&i);
							Beep(300,150);
							a12(x,i);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						
						}
					case 13:
						{
							while(1)
							{
							option(2,c);
							printf("enter the number of row in pattern : ");
							scanf("%d",&x);
							printf("enter the number of column in pattern : ");
							scanf("%d",&i);
							Beep(300,150);
							a13(x,i);
							system("pause");
							Beep(300,150);
							system("color 4f");
    						}
    						break;
						}	
				case 14:
						{
						while(1)
							{
							option(1,c);
							printf("enter the number of nodes in dna pattern : ");
							scanf("%d",&x);
							Beep(300,150);
							a14(x);
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
							asterisk();			
							break;
						}
						
				}
}

