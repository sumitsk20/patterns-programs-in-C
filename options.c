#include"medium.h"
void file_down();
const int sel=6;

char str[20],f_name[10], path[40],f_path[40], f_down[40];
void option(int p,int x)
{	
		system("color 4f");
	//	char str[20],f_name[10], path[40],f_path[40], f_down[40];
		itoa(x,str,10);
		int sub_count=1;    
    	char s_ch='0';
    
  
	while(1)
		{			
			if(sub_count==3 && s_ch=='\r')
			break;
    			
 	  			switch(s_ch)
					{
  						case 80:
  							Beep(500,100);
   							sub_count++;
    						if (sub_count==6+1) sub_count=1;
   					 		break;
	   					case 72:
	   						Beep(500,100);
	    					sub_count--;
    						if(sub_count==0) sub_count=6;
    						break;
  					}
  			

			highlight(sel,sub_count);
  			s_ch=getch();
  			
			  
			  
			if(s_ch==27) //if esc pressed
			  	main_menu();
				
				if(p==1)
					{
						strcpy(path,"_hint\\asterisk\\");
						strcpy(f_path,"_dynamic_source_file\\_asterisk\\d_");
						strcpy(f_name,"a");
						strcat(f_name,str);
						strcat(path,f_name);
						strcat(f_path,f_name);
						strcpy(f_down,"..\\d_");
						strcat(f_down,f_name);
						strcat(f_down,".c");
					}
				else if(p==2)
					{
						strcpy(path,"_hint\\numeric\\");
						strcpy(f_path,"_dynamic_source_file\\_numeric\\d_");
						strcpy(f_name,"n");
						strcat(f_name,str);
						strcat(path,f_name);
						strcat(f_path,f_name);
						strcpy(f_down,"..\\d_");
						strcat(f_down,f_name);
						strcat(f_down,".c");
					}
				else if(p==3)
					{
						strcpy(path,"_hint\\alpha\\");
						strcpy(f_path,"_dynamic_source_file\\_alpha\\d_");
						strcpy(f_name,"al");
						strcat(f_name,str);
						strcat(path,f_name);
						strcat(f_path,f_name);	
						strcpy(f_down,"..\\d_");
						strcat(f_down,f_name);
						strcat(f_down,".c");	
					}

  			while(s_ch=='\r')
					{
						Beep(300,150);
   							if (sub_count==1)
								{
									system("cls");
									FILE *fp;
									char c;
									system("color f0");
									strcat(path,"hint");
									strcat(path,".txt");
									fp=fopen(path,"r");
									while( ( c = fgetc(fp) ) != EOF )
      								printf("%c",c);
									printf("\n");
									fclose(fp);
									system("pause");
									Beep(300,150);
									system("color 4f");
								
									
									
									break;
								}
								
								
							else if (sub_count==2)
								{
									
									char input;
									system("cls");
									system("color f0");
									FILE *fp;
									char c;
									strcat(f_path,".c");
									fp=fopen(f_path,"r");
									while( ( c = fgetc(fp) ) != EOF )
      								printf("%c",c);
      								fclose(fp);
      								printf("Do you want to save this code.(Y/N)");
      								scanf("%s",&input);
      								Beep(300,150);
									  	if(input=='Y' || input=='y')
      										{
      											file_down();
      											system("color 9a");
      											printf("Your file has been saved outside your current directory\n");
      											system("pause");
      											Beep(300,150);
      					
					  						}
									system("color 4f");
									break;
								}
			
							else if(sub_count==3)
								{
									system("cls");
									break;
								}
							else if(sub_count==4)
								{
									if(p==1)asterisk();
									if(p==2)numeric();
									if(p==3)alpha();
									break;
								}
							else if(sub_count==5)
								{
									main_menu();
									break;
								}
							else
								{
									ext();
									break;
								}
   					}
   					
   			
  		}
}

	void file_down()
   				{
   					system("cls");
					FILE *fp ,*temp;
					char c;
					fp=fopen(f_path,"r");
					temp=fopen(f_down,"ab+");
					while( ( c = fgetc(fp) ) != EOF )
      				{fputc(c,temp);}
     				fclose(fp);
    				fclose(temp);
				   }
