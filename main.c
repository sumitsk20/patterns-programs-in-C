#include"medium.h"

const sel2 =4;
int main()
{
	char get_inp;
		 int i,j,k,freq=200;
    for(i=0; i<80; i++)
    {
        printf("\xdb");
    }
    printf("\n");
    for(i=0; i<80; i++)
    {
        printf("\xdb");
    }
  system("color 9");
	gotoxy(14,5);printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
 	//Beep(800,100);
    gotoxy(16,6);printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	Beep(700,100);
	gotoxy(16,7);printf("\xba");gotoxy(19,7);printf("***** C PATTERN DESIGNING PROJECT *****");Beep(600,100);gotoxy(60,7);printf("\xba");
 	gotoxy(16,8);printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    gotoxy(14,9);printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	Beep(500,100);
 
    gotoxy(19,11);printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	gotoxy(19,12);printf("\xba");gotoxy(23,12);printf("BY BHAVINI BHUTANI & SUMEET KUMAR");Beep(400,100);gotoxy(57,12);printf("\xba");
 	gotoxy(19,13);printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	Beep(300,100);

 
 gotoxy(0,16);
    for(i=0; i<8; i++)
    {
    	freq=freq+50;
    //	printf("\n");
    	for(j=0;j<80;j++)
    	{
    		if(i%2==0)
    		printf("\xcd");
    		else
			printf("\xdb");
		}
	
        Beep(freq,150);//after printing one . another comes after 0.5 seconds
    }
   	printf("\n\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\xdb\xdb**  Press ESC to EXIT   **\xdb\xdb\n\t\t\t\xdb\xdb** Press ENT to CONTINUE**\xdb\xdb\n");
	printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	get_inp=getch();
	if(get_inp==27)  //key chaercter value of esc
	{
		ext();
	}
    //getch();
    Beep(400,200);
   
    
    
    system("cls");
	
	gotoxy(12,1);printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	Beep(700,100);
	gotoxy(12,2);printf("\xba");gotoxy(16,2);printf("WELCOME TO A GUIDE TO PATTERN DESIGNING PROJECT");Beep(600,100);gotoxy(66,2);printf("\xba");
 	gotoxy(12,3);printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
 	
	   

	gotoxy(1,7);printf("The aim of developing this project is to help students like us who would be");
	gotoxy(1,8);printf("sitting  for interviews in an year or two and competing for jobs. Pattern ");
	gotoxy(1,9);printf("Designing in todays time is an important parameter to judge the interviewees.");
	gotoxy(1,10);printf("This is a small effort to help students brush up their pattern designing skills");
	gotoxy(1,11);printf("as it would provide a guide for the same.");
	gotoxy(1,13);printf("This program provides various designs under categories asterisk , number and");
	gotoxy(1,14);printf("alphabet sequenced as per the difficulty level. The user can choose any pattern");
	gotoxy(1,15);printf("and will get options like HINT , CODE , RUN for  pattern design. Hint wil provide");
	gotoxy(1,16);printf(" a basic logic behind developing that pattern. The code will give the user the");
	gotoxy(1,17);printf("actual code of the pattern.The user will also get an option to save that code if");
	gotoxy(1,18);printf(" required. Run option will let the user try the pattern code for any number rows.");

	
	printf("\n\n\n\n");
    	printf("\n\n\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	printf("\t\t\t\xdb\xdb**  Press ESC to EXIT   **\xdb\xdb\n\t\t\t\xdb\xdb** Press ENT to CONTINUE**\xdb\xdb\n");
	printf("\t\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
	get_inp=getch();
	if(get_inp==27)  //key chaercter value of esc
	{
		ext();
	}
	Beep(400,200);
		
    
    system("cls");
  heart();
 
    system("cls");
    system("color 84");
    gotoxy(16,6);printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
 	gotoxy(16,7);printf("\xba"); gotoxy(23,7);printf("**Program will Start Now**");gotoxy(60,7);printf("\xba");
 	gotoxy(16,8);printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
   	gotoxy(0,12);
   
    for(i=1; i<=80; i++)
    {
        
        printf("*");
    Beep(freq,50);
    }
   
    
    system("color 4f");   //1st is for back ground color and second is for text color
    
	main_menu();     //main menu called
    
    return 0;
    
}

void main_menu()
{
    system("color 4f");
		
		int main_count=1;    
    	char main_ch='0';
 while(1)
 	{
  		switch(main_ch)
			{
  				case 80:
  						Beep(500,100);
   						main_count++;
    					if (main_count==4+1) main_count=1;
    					
   					 	break;
   				case 72:
   					
				   		Beep(500,100);
    					main_count--;
    					if(main_count==0) main_count=4;
    					
    					break;
  			}
  			
  		highlight(sel2,main_count);  //sel2=no, main_count=count , It will show the main menu/sub menu wrt the parameters passed i.e. 4 for menu and 6 for submenu
  		main_ch=getch();  //will take the input from the user corresponding to which the user pressed enter
  		
  			if(main_ch=='\r')
			{
   				Beep(300,150);
   						if (main_count==1) 
						   {
						   		system("cls");
								asterisk();
							}
    					else if(main_count==2)
    						 {
						   		system("cls");
								numeric();
							}
						else if (main_count==3)
							 {
						   		system("cls");
								alpha();
							}
						else ext();
   					
   					
  			}
 	}
}



void ext()
{
    int i ,freq=300;
    system("cls");
    system("color 0c");
    gotoxy(16,6);printf("\xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
 	gotoxy(16,7);printf("\xba");gotoxy(60,7);printf("\xba");
 	gotoxy(16,8);printf("\xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
    gotoxy(23,7);printf("Thank you for using our program");
    printf("\n\n\t\t\t     Terminating Program \n\n");
    for(i=1; i<=80; i++)
    {
        Sleep(50);
        printf("*");
    Beep(freq,50);
    }
    Beep(1000,2000);
  
   
   exit(1);
}	


	

