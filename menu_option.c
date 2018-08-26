 #include"medium.h"
 
 
 COORD coord={0,0}; // this is global variable
                   //center of axis is set to the top left cornor of  screen
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


void window()
{
 int i;
 system("cls");
 gotoxy(10,0);
 
 printf(" ************ * GUIDE TO PATTERN DESIGNING * ************ ");

 printf("\n\n");
 gotoxy(30,1);printf("***C PROJECT***");
 
 gotoxy(25,6);printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
 gotoxy(25,7);printf("\xba");gotoxy(50,7);printf("\xba");
 gotoxy(25,8);printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
 
 gotoxy(25,9);printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
 gotoxy(25,10);printf("\xba");gotoxy(50,10);printf("\xba");
 gotoxy(25,11);printf("\xba");gotoxy(50,11);printf("\xba");
 gotoxy(25,12);printf("\xba");gotoxy(50,12);printf("\xba");
 gotoxy(25,13);printf("\xba");gotoxy(50,13);printf("\xba");
 gotoxy(25,14);printf("\xba");gotoxy(50,14);printf("\xba");
 gotoxy(25,15);printf("\xba");gotoxy(50,15);printf("\xba");
 gotoxy(25,16);printf("\xba");gotoxy(50,16);printf("\xba");
 gotoxy(25,17);printf("\xba");gotoxy(50,17);printf("\xba");
 gotoxy(25,18);printf("\xba");gotoxy(50,18);printf("\xba");
 gotoxy(25,19);printf("\xba");gotoxy(50,19);printf("\xba");
 gotoxy(25,20);printf("\xba");gotoxy(50,20);printf("\xba");
 gotoxy(25,21);printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");


}


void highlight(int no,int count)  //no By default 4, no=sel2, count=main_count
{


if(no==4){
 window();
  gotoxy(33,7);printf("Main Menu");
  gotoxy (30,11);printf("   Asterisk ");
  gotoxy (30,13);printf("   Numeric  ");
  gotoxy (30,15);printf("   Alphabet ");
  gotoxy (30,17);printf("   Exit ");
 
  switch(count)
  {
   case 1:
    gotoxy (30,11);
    printf(" > Asterisk        ");
    break;
   case 2:
    gotoxy (30,13);
    printf(" > Numeric         ");
    break;
   case 3:
    gotoxy (30,15);
    printf(" > Alphabet        ");
    break;
    case 4:
    gotoxy (30,17);
    printf(" > Exit            ");
    break;
  }
  
 }

 if(no==6)
 {
 	window();
 	gotoxy(33,7);printf("Sub Menu");
 
  gotoxy (27,10);printf("   Show Hint 	  ");
  gotoxy (27,12);printf("   Show Code       ");
  gotoxy (27,14);printf("   Run Code 	    ");
  gotoxy (27,16);printf("   Go Back         ");
  gotoxy (27,18);printf("   Go to Main Menu ");
  gotoxy (27,20);printf("   Exit Program    ");
  
 
  switch(count)
  {
   case 1:
    gotoxy (27,10);
    printf(" > Show Hint       ");
    break;
   case 2:
    gotoxy (27,12);
    printf(" > Show Code        ");
    break;
   case 3:
    gotoxy (27,14);
    printf(" > Run Code 	    ");
    break;
    case 4:
    gotoxy (27,16);
    printf(" > Go Back          ");
    break;
	case 5:
    gotoxy (27,18);
    printf(" > Go to Main Menu  ");
    break;
    case 6:
    gotoxy (27,20);
    printf(" > Exit Program    ");
    break;
  }
  
 }
}

