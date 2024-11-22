#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<time.h>

// Function declarations
void movie();
void events();
void thisWeekend();
void nextWeekend();
void nowShowing();
void comingSoon();
void location();
int screen();
void transaction();
void print_ticket();

// Global variables
char sno[15],str[10],sname[20],arr[5];
char releaseDates[2][20] = {"2023-11-01", "2023-11-03"};
int bookedSeats[5][10] = {0};
int a,b,c,d,e,f,g,h,l,m,n,o,p,q,s,t,u,mon,year,w;
int gy,i,j,k,r,loc,cvv=0,otp,x,z;
int cost=0,adult=0,kid=0,couple=0,sp;

// Driver Code
int main() {
    printf("********************************************************************************\n");
    printf("\n\t\t\tWELCOME TO C BOXOFFICE......\n\n");
    printf("********************************************************************************\n");
int choice;
do{
	

    printf("1.Movies\t\t2.Events\n");
    printf("Enter your choice:");
    
    
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            movie();
            break;
        case 2:
            events();
            break;
            
        default:
            printf("Invalid choice\n");
    }

    printf("Press any key to return menu...\n");
    getchar(); // Consume the newline character
    getchar(); // Wait for user input
     
}while(choice!='2');

return 0;
}


void movie() {
    printf("1.Now Showing\t\t2.Coming Soon\n");
    printf("Enter Category:");
    int movieChoice;
    scanf("%d", &movieChoice);

    switch (movieChoice) {
        case 1:
            nowShowing();
            break;
        case 2:
            comingSoon();
            break;
        default:
            printf("Invalid choice\n");
    }
}
char* getCurrentDate() {
	
    time_t t;
    time(&t);
    struct tm* currentDate = localtime(&t);
    char* formattedDate = (char*)malloc(20);
    strftime(formattedDate, 20, "%Y-%m-%d", currentDate);
    return formattedDate;
}

void nowShowing() {
   printf("\nThe movie list is..................\n");
    printf("1. DUNKI\t\t2. SAALAR\n");
    printf("Choose a movie: ");
    scanf("%d", &c);

    // Validate movie choice
    if (c < 1 || c > 2) {
        printf("Invalid choice\n");
        return;
    }

    // Display movie details, including release date
    printf("\nMovie: %s\n", (c == 1) ? "DUNKI" : "SAALAR");
    printf("Release Date: %s\n", releaseDates[c - 1]);

    // Check if the movie is released based on the current date
    char* currentDate = getCurrentDate();
    int dateComparison = strcmp(currentDate, releaseDates[c - 1]);

    // Allow booking if the current date is on or after the release date
    

  
   if(c==1)     // Executes if DUNKI  movie is chosen
      {
        printf("\n1.Book tickets\t\t2.Review\n");
        printf("Enter your option:");
        scanf("%d",&d); 
            if(d==1)   // Book Tickets
	             {
                  location();
                  printf("\n1.Theatre A\t\t2.Theatre B\n");
                  printf("Choose a theatre for DUNKI:\n");
                  scanf("%d",&e);
                      if(e==1)      //Theatre Selection ::: Movie-->Book Tickets-->Theatre A
                          {
                              printf("Choose A's show timings for DUNKI...\n");
                              printf("1.Morning\t\t2.Afternoon\n");
                              printf("Choose an option:");
                              scanf("%d",&f);
                                  if(f==1)           //movie 1--> theatre A--> morning
                                      {
	                                       printf("\nWELCOME TO DUNKI'S MORNING SHOW IN THEATRE A....\n");
	                                       screen();
	                                      transaction();
	                                      printf("please wait we are printing your ticket");
	                                      print_ticket();
	                                     }
                                  else               //Movie 1 -->Theatre A --> Afteroon
                                      {
                                          printf("\nWELCOME TO DUNKI'S AFTERNOON SHOW IN THEATRE A.....\n");
                                        screen();
                                       transaction();
                                       printf("please wait we are printing your ticket");
	                                      print_ticket();
	                                     }
	                           }
                        else   // Movie 1 --> Theatre B
                            {
                              printf("\nChoose B's show timings for DUNKI\n");
                              printf("1.Morning\t\t2.Afternoon\n");
                              printf("Choose an option:");
                              scanf("%d",&f);
                                  if(f==1)  //Movie 1 --> Theatre B--> Morning
                                      {
                                          printf("\nWELCOME TO DUNKI'S MORNING SHOW IN THEATRE B....\n");
                                         screen();
                                        transaction();
                                        printf("please wait we are printing your ticket");
	                                      print_ticket();
                                      }
                                  else    // Movie 1 --> Theatre B --> Afternoon
                                      {
                                          printf("\nWELCOME TO DUNKI'S AFTERNOON SHOW IN THEATRE B.....\n");
                                        screen();
                                    transaction();
                                    printf("please wait we are printing your ticket");
	                                      print_ticket();
                                      }
                            }
                    }
          else  // Review on Movie 1
            {
                printf("\n\tReview of DUNKI....\n");
                printf("    Shah Rukh Khan's movie 'Dunki' is said to be based on the 'donkey route' or 'donkey flight' that lakhs of Indians take to reach countries like the US, the UK or some other European country.");
                
                
                printf("Overall Rating:4.5");
            }
        }
    else  // Movie 2 is chosen
      {
        printf("\n1.Book tickets\t2.Review\n");
        printf("Enter your option:");
        scanf("%d",&d);
    
        location();
            if(d==1)  // Movie 2 -->Book Tickets
              {
                  printf("\nChoose theatre for SALAAR:");
                  printf("\n1.A theatre\t\t2.B theatre");
                  printf("\nEnter your option:");
                  scanf("%d",&e);
                        if(e==1)   // Movie 2 --> Book Tickets --> Theatre A
                            {
                                printf("\nChoose A's show timings for SALAAR");
                                printf("\n1.Morning\t\t2.Afternoon\n");
                                printf("Choose an option:");
                                scanf("%d",&f);
                                          if(f==1)   // Morning Show in Theatre A
                                              { 
                                                  printf("\n\t\tWELCOME TO SALAAR'S MORNING SHOW IN THEATRE A....\n");
                                                  screen();
                                                  transaction();
                                                  printf("please wait we are printing your ticket");
	                                      print_ticket();
                                              }
                                          else
                                              {
                                                  printf("\n\t\tWELCOME TO SALAAR'S AFTERNOON SHOW IN THEATRE B.....\n");
                                                 screen();
                                                 transaction();
                                                  printf("please wait we are printing your ticket");
	                                      print_ticket();
                                              }
                            }
                        else   // Movie 2--> Book Tickets --> Theatre B
                            {
                                printf("\nChoose B's show timings for SALAAR\n");
                                printf("1.Morning\t\t2.Afternoon\n");
                                printf("Choose an option:");
                                scanf("%d",&f);
                                            if(f==1)
                                                {
                                                    printf("\n\t\tWELCOME TO SALAAR'S MORNING SHOW IN THEATRE A....\n");
                                                    screen();
                                                 transaction();
                                                  printf("please wait we are printing your ticket");
	                                      print_ticket();
                                                }
                                            else
                                                {
                                                    printf("\n\t\tWELCOME TO SALAAR'S AFTERNOON SHOW IN THEATRE B.....\n");
                                                   screen();
                                                 transaction();
                                                  printf("please wait we are printing your ticket");
	                                      print_ticket();
                                                }
                            
                          }
               }
      else     // Review Of Movie 2
        { 
                
                  printf("\t\t Review of SALAAR....\n");
                  printf("A gang leader tries to keep a promise made to his dying friend and takes on the other criminal gangs its a complete action drama and thriller movie .");
                  
                  printf("Overall Rating:4");
          }
    }
}

void comingSoon() {
    printf("Coming soon movies are....\n");
    printf("1.PUSHPA-2\t2. DEVARA\n");
    printf("Enter your choice:");
    int eventChoice;
    scanf("%d", &eventChoice);

    if (eventChoice == 1) {
        printf("\n\t\tMovie name: PUSHPA-2\n\t\tRelease Date:15 August 2024\n\n");
        printf("Booking opens on  10 August 2024\n");
    } else if (eventChoice == 2) {
        printf("\n\t\tMovie name: Devara\n\t\tRelease Date:5 April 2024\n\n");
        printf("Booking opens on  1 April 2024\n");
    } else {
        printf("Invalid choice\n");
    }
}
void thisweekend()
{
printf("\n\n1.Haailand resort\t\t2.Music live\n");
printf("Enter ur choice:");
scanf("%d",&m);
        if(m==1)
            {
                
                printf("\n\t\tWELCOME TO HAAILAND RESORT......\n");
                printf("\n1.Book tickets\t\t2.Overview\n");
                printf("Enter ur choice:");
                scanf("%d",&n);
                      if(n==1)
                           {
                                printf("\nDate:\nSaturday\n15  December\n\nTime:6.00pm\n\n\t\tProceed....");
                                printf("\nSelect ur category...\n");
                                printf("\nAdults\n500/-\nEach ticket grants entry to 1 person....\n");
                                printf("\nKids\n300/-\nEach ticket grants entry to 1 person....\n");
                                printf("\nEnter number of adults and kids:");
                                scanf("%d%d",&adult,&kid);
                                
                               
                                printf("\nYou have to pay:%d",(500*adult)+(300*kid));
                                transaction();
                                
                                                  printf("please wait we are printing your ticket");
	                                      print_ticket();
                            }
                        else
                            {
                                printf("\nHaailand grandly welcomes you to the fantastic event.....");
                                printf("\nDiscover an endless combination of thrilling rides,water park,");
                                printf("fantastic entertainment,delightful restaurants");
                              }  
            }
            else
              {       
                   
                    printf("\n\t\tWELCOME TO LIVE MUSIC.......\n");
                    printf("1.Book tickets\t\t2.Overview\n");
                    printf("Enter ur choice:");
                    scanf("%d",&o);
                            if(o==1)
                                  {
                                      printf("\nDate:\nSaturday\n15  December\n\nTime:3.00pm\n\n\t\tProceed....");
                                      printf("\nSelect ur category...\n");
                                      printf("\nAdults\n600/-\nEach ticket grants entry to 1 person....\n");
                                      printf("\nKids\n500/-\nEach ticket grants entry to 1 person....\n");
                                      printf("\nEnter number of adults and kids:");
                                      scanf("%d%d",&adult,&kid);
                                     
                                      printf("\nYou have to pay:%d",(600*adult)+(500*kid));
                                      transaction();
                                       printf("please wait we are printing your ticket\n");
	                                      print_ticket();

                                    }

                            else
                                {
                                  printf("\nLive music welcomes you....\n");
                                  printf("\nImmerse yourself in the world of music....ROCKZZZZZ");
                                }
                      }
        }


 // Next Week Events
        
void nextweekend()
{
printf("\n\n1.Cuba event\t\t2.TEDx event\n");
printf("\nEnter ur choice:");
scanf("%d",&p);
if(p==1)
{
    
    printf("\n\t\tWELCOME TO CUBA EVENT......\n");
    printf("\n1.Book tickets\t\t2.Overview\n");
    printf("\nEnter ur choice:");
    scanf("%d",&q);
        if(q==1)
            {
                printf("\nDate:\nSaturday , 15 December\n\nTime:10.00pm\n\n\t\tProceed....");
                printf("\nOnly Couples are allowed...\n");
                printf("Wanna come...!\nBring your partner...\nDon't have one...\nFind one...");
                printf("\nCouple:  2000/-\nEach ticket grants entry to a couple....\n");
                printf("\t Location: Trendset mall\n5th floor\nVijayawada\nAndhra Pradesh");

                printf("\nEnter number of couples:");
                scanf("%d",&couple);
                
                printf("\nYou have to pay:%d",(couple*2000)/*+(team*4500)*/);
                transaction();
              }
          else
              {
                printf("\nCuba welcomes you to the fantastic event.....");
                printf("Spend time with your loved ones....");
              }    
          }
    else
      {
           
            printf("\n\t\tWELCOME TO TEDx EVENT.......\n");
            printf("1.Book tickets\t\t2.Overview\n");
            printf("\nEnter ur choice:");
            scanf("%d",&s);
                    if(s==1)
                        {
                          printf("\nDate:\nSaturday\n22 December\nTime:\n9.00am\n\n\t\tProceed....");
                          printf("\nSelect ur category...\n");
                          printf("\nAdults\n4000/-\nEach ticket grants entry to 1 person....\n");
                          printf("\tLocation:Vijayawada,Andhra Pradesh\n");
                          printf("\nEnter number of adults:");
                          scanf("%d",&adult);
                       
                          printf("\n\nYou have to pay:%d",(adult*4000));
                          transaction();
                          }
                    else
                        {
                          printf("\nTEDx EVENT WELCOMES YOU....\n");
                          printf("Explore yourself....\nBuild your thinking...........");
                        }
          }
    }


void events()
{
 printf("Events are...\n");
 printf("\n1.this weekend\t\t2.next weekend\n");
 printf("\n\nSelect ur option:");
 scanf("%d",&l);
      if(l==1)
            thisweekend();
      else
            nextweekend();
}


// This weekend Events Function

int screen() {
    int r, g, h, u,x, cost = 0;
    int bookedSeats[5][10] = {0}; // 2D array to keep track of booked seats

    // Displaying seat arrangement
    for (int j = 0; j < 5; j++) {
        for (int i = 0; i < 10; i++) {
            // Display seat
            printf("  |__|  ");
        }
        printf("\n");
    }

    // Display screen
    printf("\n\n\t\t\tScreen\n");

    // Display seat numbers
    for (int i = 1; i <= 10; i++) {
        printf("\t%d  ", i);
    }

    // Display row numbers
    for (int i = 1; i <= 5; i++) {
        printf("\n%d\t", i);
    }

    // User input for seat booking
    do {
        printf("\nEnter row & column (e.g., 1 3): ");
        scanf("%d %d", &r, &g);

        // Validate the row and column values
        if (r >= 1 && r <= 5 && g >= 1 && g <= 10) {
            // Check if the seat is already booked
            if (bookedSeats[r - 1][g - 1] == 0) {
                printf("Seat booked at Row %d, Column %d\n", r, g);
                cost += (r <= 3) ? 100 : 200;
                bookedSeats[r - 1][g - 1] = 1; // Mark the seat as booked
            } else {
                printf("Seat at Row %d, Column %d is already booked. Please choose another seat.\n", r, g);
            }
        } else {
            printf("Invalid seat selection. Please try again.\n");
        }

        // Ask if the user wants to book another ticket
        printf("Do you want to book another ticket? (yes=1/no=2): ");
        scanf("%d", &h);
    } while (h == 1);
    
    printf("The price of the ticket you selected is 100/-");

    // Snacks selection
    printf("\nSNACKS TIME:\n");
    printf("1. Coke      Cost: 200\n");
    printf("2. Popcorn   Cost: 300\n");
    printf("3. Combo     Cost: 450\n");
    printf("4. No Snacks\n");
    printf("Enter your choice: ");
    scanf("%d", &u);

    // Calculate total cost based on snack choice
    switch (u) {
        case 1:
            cost += 200;
            break;
        case 2:
            cost += 300;
            break;
        case 3:
            cost += 450;
            break;
        case 4:
            // No snacks
            break;
        default:
            printf("Invalid option\n");
            break;
    }

    // Display the total amount to be paid
    printf("You should pay: Rs. %d\n", cost);
    printf("Enter your mobile number:\n");
    scanf("%d",&x);

    // Perform transaction (you can add this part as per your needs)
    // transaction();

    return cost; // Return the total cost
    
}


void db()
{

printf("\n\t\t\t.......... TRANSACTION........");
printf("\nEnter name as it appears on your card :");
scanf("%s",&sname);
printf("\nEnter your card number:");
scanf("%s",&sno);
printf("\nEnter expiry date(month&year):\n");
scanf("%d %d",&mon,&year);

printf("\nEnter CVV:");
 scanf("%d",&cvv);


printf("\nEnter your OTP number:");

scanf("%d",&otp);


printf("YOUR TRANSACTION HAS BEEN DONE SUCCESSFULLY......\n");
printf("...............\n");
printf("YOUR TICKET IS BOOKED\n");
printf("Enjoy the show......\n");
printf("Thank you... Visit again...\n");


printf("ALERT!!!");

printf("You have a show in half an hour\n");


}

// Choosing Location

void location()
{
	printf("\nAvailable locations nearby....");
	printf("\n1.BENZCIRCLE\n2.BANK COLONY\n3.MACHAVARAM\n4.KANURU\n");
	printf("Enter your location:");
	scanf("%d",&loc);
	printf("\nThe available theatres are ....\n");
	if(loc==1)
	 {
	   printf("\nTheatre A is 3km from your location....");
	   printf("\nTheatre B is 7km from your location....");
    }
  else if(loc==2)
	 {
	   printf("\nTheatre A is 8km from your location....");
	   printf("\nTheatre B is 2km from your location....");
    }
  else if(loc==3)
    {
	   printf("\nTheatre A is 1km from your location....");
	   printf("\nTheatre B is 5km from your location....");
    }
	else if(loc==4)
	 {
	   printf("\nTheatre A is 6km from your location....");
	   printf("\nTheatre B is 12km from your location....");
	 }
	 else
	   printf("\nInvalid location.....");
  }

// Transaction Function

void transaction()
{
  printf("\n\n\n1.Debit card\t2.Credit card");
  printf("\nEnter your mode of transaction:");
  scanf("%d",&w);
  if(w==1)
    {
    printf("\t\tDEBIT CARD TRANSACTION");
    db();
    }
  else if(w==2)
  {
  printf("\t\tCREDIT CARD TRANSACTION");
  db();
  }
  else{
  	printf("Invalid choice");
  }
  

}
void print_ticket() {
    printf("\n\n\t\t\t********** TICKET **********\n");
    printf("\t\t\tWELCOME TO C BOXOFFICE\n");
    printf("\t\t\t--------------------------\n");

    // Print movie or event details
    if (d == 1) {
        printf("\t\t\t\t  MOVIE TICKET\n");
        printf("\t\t\t--------------------------\n");
        printf("\t\t\tMovie: %s\n", (c == 1) ? "DUNKI" : "SAALAR");
        printf("\t\t\tShow Date: %s\n", getCurrentDate());
        printf("\t\t\tShow Time: %s\n", (f == 1) ? "Morning" : "Afternoon");
    } else if (l == 1) {
        printf("\t\t\t\t  EVENT TICKET\n");
        printf("\t\t\t--------------------------\n");
        printf("\t\t\tEvent: %s\n", (m == 1) ? "Haailand Resort" : "Live Music");
        printf("\t\t\tEvent Date: Saturday, 15 December\n");
        printf("\t\t\tEvent Time: %s\n", (m == 1) ? "6.00pm" : "3.00pm");
    } else if (l == 2) {
        printf("\t\t\t\t  EVENT TICKET\n");
        printf("\t\t\t--------------------------\n");
        printf("\t\t\tEvent: %s\n", (p == 1) ? "Cuba Event" : "TEDx Event");
        printf("\t\t\tEvent Date: %s\n", (p == 1) ? "Saturday, 15 December" : "Saturday, 22 December");
        printf("\t\t\tEvent Time: %s\n", (p == 1) ? "10.00pm" : "9.00am");
    }

    printf("\t\t\t--------------------------\n");
    printf("\t\t\tLocation: %s\n", (loc == 1) ? "BENZCIRCLE" : (loc == 2) ? "BANK COLONY" : (loc == 3) ? "MACHAVARAM" : "KANURU");
    printf("\t\t\tTheatre: %s\n", (e == 1) ? "A" : "B");
   
    printf("\n");
    printf("\t\t\t--------------------------\n");
    
    printf("\t\t\t--------------------------\n");
    printf("\t\t\tEnjoy the show!\n");
    printf("\t\t\t--------------------------\n");
    printf("\t\t\tThank you for choosing C BOXOFFICE\n");
    printf("\t\t\t********** TICKET **********\n");
}



