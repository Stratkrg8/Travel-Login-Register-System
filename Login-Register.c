

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char stoixeia [100][7][200];
char answer [100];
char password[100][200];
char new_password[100][200] ;
	int sum1=0 ;



int main(int argc, char *argv[]) {
	
	

	
	int i=0;
	int j=0;
	
	printf ("STARTING MENU\n");
	printf ("Please Type LOGIN to enter your personal information or REGISTER to create a new acoount if you want to exit type EXIT\n ");
	scanf ("%s", &answer);
	while (strcmp (answer, "REGISTER") != 0 && strcmp (answer, "LOGIN" ) != 0 && strcmp (answer, "EXIT") !=0 ){
		printf ("FALSE VALUES\n");
		printf ("Please Type LOGIN to enter your personal information or REGISTER to create a new acoount\n ");
		scanf ("%s", answer);
	}
			
			
	while (strcmp (answer, "REGISTER")==0 || strcmp (answer, "LOGIN")==0 || strcmp (answer, "EXIT") == 0) {
	
	 		
     if (strcmp (answer, "REGISTER") == 0){
       registerfunction (stoixeia, password, sum1++, i++);
       
	 }
    
	if (strcmp (answer, "LOGIN") == 0){
	  loginfunction (stoixeia, password, sum1, j, new_password);
	 
	}
	if (strcmp (answer, "EXIT" ) == 0) 
	{
		
	  printf ("have a nice day\n");
	  break ;
	}
		printf ("STARTING MENU\n");
	printf ("Please Type LOGIN to enter your personal information or REGISTER to create a new acoount if you want to exit type EXIT\n ");
	scanf ("%s", &answer);
	while (strcmp (answer, "REGISTER") != 0 && strcmp (answer, "LOGIN" ) != 0 && strcmp (answer, "EXIT") !=0 ){
		printf ("FALSE VALUES\n");
		printf ("Please Type LOGIN to enter your personal information or REGISTER to create a new acoount\n ");
		scanf ("%s", answer);}
	
}

	
	

}


  void registerfunction (char stoixeia [100][7][200],char password[100][200], int sum1, int i)
  {
  	
  	int patra;
  	int volos;
  	int lamia;
  	int sundia[100] ;
  	char pas1[100];
  	char strat[10] ;
    int w ;
  	 
  	
  	printf ("Welcome to registration system give us your name:");
  	
  	while (i <= 100) 
  	{
  	scanf ("%s", &stoixeia[i][1]);
  	for (w = 0 ; w<=200 ; w++)
    {
    	while(isalpha(stoixeia[i][1][w]) == 0 )
    	{
    		printf ("Wrong values try again:") ;
    		scanf ("%s", stoixeia[i][1]) ;
    		
		}
		break ;
	}	
  		
	  
    printf ("Give us your surname (This will be your username):");
    scanf ("%s", &stoixeia[i][2]);
   
   	for (w = 0 ; w<=200 ; w++)
    {
    	while(isalpha(stoixeia[i][2][w]) == 0 )
    	{
    		printf ("Wrong values try again:") ;
    		scanf ("%s", stoixeia[i][2]) ;
    		
		}
		break ;
	}	
   
   
    printf ("Give us your age:") ;
    scanf (" %s", &stoixeia[i][3]) ;
    
    for (w = 0 ; w<=200 ; w++)
    {
    	while(isalpha(stoixeia[i][3][w]) > 0 )
    	{
    		printf ("Wrong values try again:") ;
    		scanf ("%s", stoixeia[i][3]) ;
    		
		}
		break ;
	}
                                                                                                                                                   
    printf ("how many times have you traveled to patra:");
    scanf ("%s", &stoixeia[i][4]);
    
    for (w = 0 ; w<=200 ; w++)
    {
    	while(isalpha(stoixeia[i][4][w]) > 0 )
    	{
    		printf ("Wrong values try again:") ;
    		scanf ("%s", stoixeia[i][4]) ;
    		
		}
		break ;
	}
    
    printf ("how many times have you traveled to lamia:");
    scanf ("%s", &stoixeia[i][5]);
    
    for (w = 0 ; w<=200 ; w++)
    {
    	while(isalpha(stoixeia[i][5][w]) > 0 )
    	{
    		printf ("Wrong values try again:") ;
    		scanf ("%s", stoixeia[i][5]) ;
    		
		}
		break ;
	}
    
    printf ("how many times have you traveled to volos:");
    scanf ("%s", &stoixeia[i][6]);
    
    for (w = 0 ; w<=200 ; w++)
    {
    	while(isalpha(stoixeia[i][6][w]) > 0 )
    	{
    		printf ("Wrong values try again:") ;
    		scanf ("%s", stoixeia[i][6]) ;
    		
		}
		break ;
	}
    
	patra = atoi(stoixeia[i][4]) ;
    lamia = atoi(stoixeia[i][5]) ;
    volos = atoi(stoixeia [i][6]) ;
   
   
    sundia[i]= (patra + lamia + volos) * 2 ;
    
    sprintf(pas1, "%d", sundia[i]) ;
    
    strcpy (password[i], stoixeia[i][2]) ;
    
    sprintf(stoixeia[i][7], "%d", sundia[i]) ;
    
   
  
   
    break ;
    
    }
    
    strcat (password[i], pas1) ;
    
    
    printf ("Your special password is :%s\n", password[i]) ;
    
    return stoixeia, sum1, i, pas1 ;
	
   }
   
   
   
   
   
   
   
   
   void loginfunction (char stoixeia[100][7][200], char password[100][200], int sum1, int j, char new_password[100][200]){
   	char username [200];
   	char password1 [200];
   	char answer1 [200];
   	
   	
   	int flag =0;
   	int mark = 0;
   	
  while (flag == 0) 	{
  	
      printf ("Please enter your username:");
   	  scanf ("%s", &username);
   	  printf ("please enter your password:");
   	  scanf ("%s", &password1 );
    for (j=0; j<=100; j++){
    	if (strcmp (username, stoixeia[j][2]) == 0 && ((strcmp (password1 , password[j]) == 0 || strcmp (password1, new_password[j]) == 0))){
		
    	 flag =1 ;
    	 mark = j ;
    	 break ;
		 }
    	 
		
	  }
	 if (flag == 1){
	 
	  break ;
            }  
	 if (flag == 0){ 
	  printf ("Password or username is wrong please try again\n");
	  
	 
	 }
   }
   	 	
		
     
     printf ("WELCOME TO OUR SYSTEM !!\n" );
     printf ("please type action !acceptable values! (Modify, Pass, View, Search, Sort, Exit)\n") ;
     scanf ("%s", &answer1);
      while (strcmp (answer1, "Modify") != 0 && strcmp (answer1, "Pass" ) != 0 && strcmp (answer1, "View") !=0  && strcmp (answer1, "Search") !=0 && strcmp (answer1, "Sort") != 0 && strcmp (answer1, "Exit") !=0  )
	  {
	  
        printf ("False values try again:");
        scanf ("%s", &answer1);
          }
          
      while (strcmp (answer1, "Modify") == 0 || strcmp (answer1, "Pass" ) == 0 || strcmp (answer1, "View") ==0  || strcmp (answer1, "Search") ==0 || strcmp (answer1, "Sort") == 0 || strcmp (answer1, "Exit") ==0  )
	  {
		   
        if (strcmp (answer1, "Modify") == 0){
        	modifyfunction (stoixeia, mark);
		}
        if (strcmp (answer1, "Pass") == 0){
          passfunction (stoixeia, mark,new_password) ;
		}
		if (strcmp (answer1, "View")== 0) {
		  viewfunction (stoixeia, sum1) ;
		}
		if (strcmp (answer1, "Search") == 0)
		{
			searchfunction (stoixeia, mark);
		}
		if (strcmp (answer1, "Sort") == 0)
		{
		 	sortfunction (stoixeia, sum1);
		
		}
		if (strcmp (answer1, "Exit") == 0){
			return 0 ;
		}
	printf ("please type action !acceptable values! (Modify, Pass, View, Search, Sort, Exit)\n") ;
    scanf ("%s", &answer1);	
	}
   }
   	
   	
   	
   	
   	
   	
   	
   	 void modifyfunction (char stoixeia[100][7][200], int mark){
   	 	
   	 	int action1  ;
   	 	
   	 	printf ("\n\n") ;
   	 	printf ("name:%s\n", stoixeia[mark][1]);
   	 	printf ("surname:%s\n", stoixeia[mark][2]);
   	 	printf ("your age is:%s\n", stoixeia[mark][3]) ;
   	 	printf ("you have travelled to patra %s time(s)\n", stoixeia [mark][4]) ;
   	 	printf ("you have travelled to lamia %s time(s)\n", stoixeia[mark][5]) ;
   	 	printf ("you have travelled to volos %s time(s)\n", stoixeia [mark][6]);
   	 	printf ("please select action modify name=1, modify username=2, modify your age=3, modify times travelled to patra=4, modify times travelled to lamia = 5, modify times traveled to volos = 6\n");
   	 	scanf ("%d", &action1);
   	 	if (action1 == 1) 
   	 	{
   	 		printf ("please enter your new name:") ;
   	 		scanf ("%s", &stoixeia [mark][1]) ;
			}
   	 	if (action1 == 2) 
   	 	{
   	 		printf ("please enter your new username:") ;
   	 		scanf ("%s", &stoixeia [mark][2]) ;
			}
			
			if (action1 == 3) 
   	 	{
   	 		printf ("please enter your new age:") ;
   	 		scanf ("%s", &stoixeia [mark][3]) ;	
		}
			
			if (action1 == 4) 
   	 	{
   	 		printf ("please enter how many times youve travelled to patra:") ;
   	 		scanf ("%s", &stoixeia [mark][4]) ;	
		}	
				if (action1 == 5) 
   	 	{
   	 		printf ("please enter how many times youve travelled to lamia:") ;
   	 		scanf ("%s", &stoixeia [mark][5]) ;	
		}	
		  if (action1 == 6)
			{
   	 		printf ("please enter how many times youve travelled to volos") ;
   	 		scanf ("%s", &stoixeia [mark][6]) ;	
		    }	
	       
			
		}
	
	
	
	
	
	
	
	
	
	
		void passfunction (char stoixeia[100][7][200] , int mark, char new_password[100][200])
   	   {
   	   	int totaltrips;
   	   	
   	   	char trips [10] ;
   	    
   	    char digit1 ;
   	    char digit2 ;
   	    char totaltrips1[100][100] ;
   	    
   	    
   	    
   	    
   	   	printf ("Welcome to password modification function\n") ;
   	   	printf ("Please enter a new value of total trip(s):") ;
   	   	scanf ("%d", &totaltrips) ;
   	   	if (totaltrips >= 20){
			  
   	   	totaltrips = totaltrips - 5 ;
   	   }
			
   	   
   	    
		strcpy (new_password[mark], stoixeia[mark][2]) ;
   	    
   	    
   	    
   	    sprintf (totaltrips1, "%d", totaltrips) ;
   	    
   	    
   	    
   	    
   	    
   	    strcat (new_password[mark], totaltrips1[mark]) ;
   	    
   	   	 printf ("please enter two new digits these will be applied to the first two letters of your password:\n");
   	   	   scanf (" %c %c", &digit1, &digit2 ) ;
			
   	   	
   	   	
   	   	new_password[mark][0] = digit1 ;
   	    new_password[mark][1] = digit2 ;
   	    
   	   	
   	   	printf ("Your new password is:%s\n", new_password[mark]) ;
   	   	
   	   	return new_password ;
   	   	
	}
   	 
   	 
   	 
   	 
   	 
   	 
   	 
   	 
   	 
   	 
   	 
   	 
   	 
   	 
        void viewfunction (char stoixeia[100][7][200], int sum1){
        	int i = 0;
        
		
		for (i=0; i<sum1; i++ )
		{
			
        printf ("name:%s\n", stoixeia[i][1]);
   	 	printf ("surname:%s\n", stoixeia[i][2]);
   	 	printf (" %s's' age is:%s\n",stoixeia[i][1], stoixeia[i][3]) ;
   	 	printf (" %s have travelled to patra %s time(s)\n",stoixeia[i][1], stoixeia [i][4]) ;
   	 	printf (" %s have travelled to lamia %s time(s)\n",stoixeia[i][1], stoixeia[i][5]) ;
   	 	printf (" %s have travelled to volos %s time(s)\n",stoixeia[i][1], stoixeia [i][6]);
   	 	printf ("\n\n") ;
   	 	
   	 	
         }
         
        printf ("Total users registered: %d\n", sum1) ;	
    
        	
       
       	}
   	
   	
   	
   	 void searchfunction (char stoixeia[100][7][200])
   	{   
   	    int l ;
   		char input0[100] ;
   		int flag = 0 ;
   		printf ("Type a number of total trips to search a user:") ;
   		scanf (" %s", &input0) ;
   		
   		for ( l= 0 ; l <=100; l++)
   		 {
   		 	if (strcmp (input0, stoixeia[l][7]) == 0){
				
   		 		printf ("name:%s\n", stoixeia[l][1]);
   	        	printf ("surname:%s\n", stoixeia[l][2]);
   	        	
   	 	        printf (" %s have travelled to patra %s time(s)\n",stoixeia[l][1], stoixeia [l][4]) ;
   	 	        printf (" %s have travelled to lamia %s time(s)\n",stoixeia[l][1], stoixeia[l][5]) ;
   	 	        printf (" %s have travelled to volos %s time(s)\n",stoixeia[l][1], stoixeia [l][6]);
   	 	        printf ("\n\n") ;
   	 	        flag = 1 ;
   	 	        break ;
   	 	             }
				}
		  if (flag == 0)
		  printf ("User not found exiting...\n\n") ;
   		
	   }
   	
   	
    void sortfunction (char stoixeia[100][7][200], int sum1)
    {       
    int p ;
    int c ;
    char swap1[100];
    char swap2[100];
    char swap3[100];
    char swap4[100];
    char swap5[100];
    char swap6[100];
    char swap7[100];
    sum1 = sum1 - 1 ;
    int nume1;
    int nume2;
    
      for ( p =0 ; p <= sum1 ; p++){
	
       for ( c= p+1 ;  c<= sum1 ; c++ ){
       	   nume1 = atoi(stoixeia[c][7]) ;
       	   nume2 = atoi (stoixeia[p][7]) ;
       	if (nume2 > nume1) {
		   
       		strcpy (swap1, stoixeia[p][1]) ;
        	strcpy (stoixeia[p][1], stoixeia[c][1]) ;
       		strcpy (stoixeia[c][1], swap1) ;
       	
		   	strcpy (swap2, stoixeia[p][2]) ;
       		strcpy (stoixeia[p][2], stoixeia[c][2]) ;
       		strcpy (stoixeia[c][2], swap2) ;
       	
		   	strcpy (swap3, stoixeia[p][3]) ;
       		strcpy (stoixeia[p][3], stoixeia[c][3]) ;
       		strcpy (stoixeia[c][3], swap3) ;
       	
		   	strcpy (swap4, stoixeia[p][4]) ;
       		strcpy (stoixeia[p][4], stoixeia[c][4]) ;
       		strcpy (stoixeia[c][4], swap4) ;
       		
       		strcpy (swap5, stoixeia[p][5]) ;
       		strcpy (stoixeia[p][5], stoixeia[c][5]) ;
       		strcpy (stoixeia[c][5], swap5) ;
       		
       		strcpy (swap6, stoixeia[p][6]) ;
       		strcpy (stoixeia[p][6], stoixeia[c][6]) ;
       		strcpy (stoixeia[c][6], swap6) ;
       		
       		strcpy (swap7, stoixeia[p][7]) ;
       		strcpy (stoixeia[p][7], stoixeia[c][7]) ;
       		strcpy (stoixeia[c][7], swap7) ;
       		
       		 }
       }
   }
       
       
	
    for (p = sum1  ; p >= 0; p --)
    {
    	printf ("name: %s\n", stoixeia[p][1]);
   	 	printf ("surname: %s\n", stoixeia[p][2]);
   	 	printf (" %s's age is: %s\n",stoixeia[p][1], stoixeia[p][3]) ;
   	 	printf (" %s have travelled to patra %s time(s)\n",stoixeia[p][1], stoixeia [p][4]) ;
   	 	printf (" %s have travelled to lamia %s time(s)\n",stoixeia[p][1], stoixeia[p][5]) ;
   	 	printf (" %s have travelled to volos %s time(s)\n",stoixeia[p][1], stoixeia [p][6]);
   	 	printf ("His total trips are:%s", stoixeia[p][7]) ;
   	 	printf ("\n\n") ; 
	}  
	
}

    


