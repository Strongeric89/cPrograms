/*
Author: Eric Strong
Platform: Windows 10, Codeblocks 13.12
The following program is a menu driven game. There a 6 options. 1.asks the user to enter 6 numbers. numbers cannot be duplicated and must be in the range of 1-43. option 2 prints the users numbers
to the screen in an unsorted fashion. option 3 uses a bubble sort algorithm to sort the numbers in ascending order. option 4 will compare the users number with the winning numbers and
decide if the user has won anything based on the questions logic. option 5 prints the frequency of the numbers entered by the user and continiusly counts during the game
option 6 then prompts the user to quit the game.
*/
#include<stdio.h>
#define NUMBERS 43               // used to count all the numbers
#define SIZE 6                  // symbolic name for the 6 numbers of users entered number and used in many for loops throughout the program
//prototypes for program
int option1(int, int*);     //option 1 reads in the numbers
int option2(int*);         // function for option2 prints the numbers
int option3(int*);         //function for option3 is to sort the numbers using bubble sort
int option4(int*);         // function 4 will check the userNumbers against the winning numbers and return the winning numbers
int option5(int*);        // is counting up all of the numbers that the user enters
int option6(int);         //will be used to exit the game
int option7(int);          //QUICK PICK OPTION ADDITIONAL FEATURE
int def(int);
int input(int);               // default function

main()
{
    int userNumbers[SIZE]={0};
    int userNumbersCopy[SIZE]={0};
    char option;
    int game = 0;
    int gameEXIT;
    int i;
    int test1=0;

    while(game == 0)
    {
         printf("\n\n\tWelcome to the Lotto Game. Please select your option:\n");
         printf("\n\t[1] Enter your Numbers\n\t[2] Print your numbers to Screen\n\t[3] Sort your numbers in Ascending order\n\t[4] Validate your numbers\n\t[5] Print the frequency of numbers\n\t[6] Exit Game\n\t[7] Quick Pick\n\tUser:");
         scanf("%s",&option);

        switch (option)
        {
            //OPTION 1
            case '1':
            {
                 //reseting the array
                for(i=0;i<SIZE;i++)
                {
                   *(userNumbers + i) = -1;
                }//end for

                system("cls");
                printf("\tYOU SELECTED OPTION 1\n\n");
                printf("\tPlease enter your %d numbers:\n",SIZE);
                printf("\tenter numbers between 1-42\n");
                //Algorithm used to copy arrays over to enusre no number is entered twice and then reset
                for(i=0;i<SIZE;i++)
                {
                    *(userNumbersCopy + i) = -1;
                    //call option1()
                    *(userNumbersCopy + i) = option1(test1, userNumbers);
                    *(userNumbers + i) = *(userNumbersCopy + i);
                    *(userNumbersCopy + i) = -1;
                }//end for

                printf("\n\n\n\n\tThank you for your Numbers!\n\n\n");
            }break;//end CASE 1

          //OPTION 2
            case '2':
            {
                system("cls");
                printf("\tYOU SELECTED OPTION 2\n");
                //call function2()
                option2(userNumbers);
            }break;//end CASE 2

            //OPTION 3
            case '3':
            {
                system("cls");
                printf("\tYOU SELECTED OPTION 3\n");
                //call function3()
                option3(userNumbers);

            }break;//end CASE 3

              //OPTION4
            case '4':
            {
                system("cls");
                printf("\tYOU SELECTED OPTION 4\n");
                option4(userNumbers);
                //call option4()

            }break; //end CASE 4
            //OPTION 5
            case '5':
            {
                system("cls");
                printf("\tYOU SELECTED OPTION 5\n");
                //Error Correction to stop from entering this option before option 1
                if(*(userNumbers + 1) == 0)
                    {
                        printf("\n\tYou must pick your numbers first Go to option 1\n");
                    }//end if
                else
                    {
                        //call option5()
                       option5(userNumbers);
                    }//end else
            }break; //end CASE 5
            //OPTION6
          case '6':
            {
                system("cls");
                printf("\tYOU SELECTED OPTION 6\n");
                //call option6()
                game = option6(gameEXIT);
            }break; //end CASE 6
             case '7':
            {
                system("cls");
                printf("\tYOU SELECTED OPTION 7: QUICK PICK\n");
                //call option6()
                option7(userNumbers);
            }break; //end CASE 7
             //OPTION default
            default:
            {
               //call def()
               def(game);
            }break;//end CASE default
        }//end switch
    }//end while menu
    printf("\n\tThank you for playing. GOODBYE");
}//end main()
//implementing option 1()
option1(int element, int *numCheck)
{
    int i;
    int numCheckcopy[SIZE]={0};
    printf("\t");
    element = input(element);
    //check if the number has already been entered
    for(i=0;i<SIZE;i++)
        {

            *(numCheckcopy + i) = *(numCheck + i);

            if(element == *(numCheck + i -1) || element == *(numCheck + i -2) || element == *(numCheck + i -3) || element == *(numCheck + i -4) || element == *(numCheck + i -5) )
                {
                    printf("\nThe number %d has already been entered. Try again\n",element);
                    i --;
                    element = input(element);
                }//end if
        }//end for
    return(element);
}//end option1
//Initializing option2()
option2(int *userNumbers1)
{
    int i;
    //Error Correction for Game rules
    if(*(userNumbers1 + 1) == 0)
    {
       printf("\n\tYou must pick your numbers first Go to option 1\n");
    }//end if
    else
        {
        printf("\n\tYour Lotto Numbers are: ");
        for(i=0;i<SIZE;i++)
        {
            printf("  %d ,",*(userNumbers1 + i));
        }//end for
        printf("\n\n\tUnsorted Numbers! Go to Option 3 to Sort\n\n\n");
        }//end else
}//end option2()
//implementing option3()
option3(int *userNumbers1)
{
    int i,k;
    int organizer;
    int temp;
    //Error Correction for Game rules
    if(*(userNumbers1 + 1) == 0)
    {
       printf("\n\tYou must pick your numbers first Go to option 1\n");
    }//end if
    else
        {
    //using the Bubble sort Algorithm to sort the elements into ascending order using pointer notation
            for(i=0; i<SIZE-1;i++)
            {
                for(organizer = 0;organizer < SIZE - 1;organizer ++)
                {
                    if(*(userNumbers1 + organizer) > *(userNumbers1 + organizer + 1) )
                    {
                        temp = *(userNumbers1 + organizer);
                        *(userNumbers1 + organizer) = *(userNumbers1 + organizer + 1);
                        *(userNumbers1 + organizer + 1) = temp;
                    }//end if
                }//end inner loop
            }// end outter loop
            //print out the newly sorted array
            printf("\n\tYour Lotto Numbers are: ");
            for(i=0;i<SIZE;i++)
            {
                printf("  %d ,",*(userNumbers1 + i));
            }//end for
        printf("\n\n\tSorted Numbers!\n\n\n");
        }//end else
    return(userNumbers1);
}//end option3()
//inititalizing option4()
option4(int *userNumbers1)
{
    int i,k;
    int gameNumbers[SIZE]= {1,3,5,7,9,11};
    int bonusNum = 42;
    int commonNumbers[SIZE]={0};
    int win=0;
    int winBonus=0;
    if(*(userNumbers1 + 1) == 0)
    {
       printf("\n\tYou must pick your numbers first Go to option 1\n");
    }//end if
    else
    {
    //print the Winning lotto numbers
        printf("\n\tThe Winning Lotto Numbers are:\n\n");
        for(i=0;i<SIZE;i++)
        {
            printf("\t %d , ",*(gameNumbers + i));
        }//end for
        printf("Bonus Number %d\n\n",bonusNum);
        //Print the user's number to screen
        printf("\n\tand Your Numbers are:\n\n");
        for(i=0;i<SIZE;i++)
        {
            printf("\t %d , ",*(userNumbers1 + i));
        }//end for
            for(i=0;i<SIZE;i++)
            {
                for(k=0;k<SIZE;k++)
                {
                      if(*(userNumbers1 + i) == *(gameNumbers + k) || *(userNumbers1 + i) == bonusNum )
                        {
                            *(commonNumbers + i) = *(userNumbers1 + i);
                        }//end if
                }//end inner
            }//end outter
        //counting the balls up
        for(i=0;i<SIZE;i++)
        {
            if(*(commonNumbers + i) == 42)
            {
                winBonus = 1;
            }//end if
            if(*(commonNumbers + i) == 1 || *(commonNumbers + i) == 3 || *(commonNumbers + i) == 5 || *(commonNumbers + i) == 7 || *(commonNumbers + i) == 11|| *(commonNumbers + i) == 9)
            {
            printf("\n\n\tYour number in common is %d\n",*(commonNumbers + i));
            win ++;
            }//end if
            if(*(commonNumbers + i)== 42)
            {
            printf("\n\n\tYour number in common is %d\n",*(commonNumbers + i));
            }//endif
        }//end for
       if(win == 6 && winBonus == 0 )
       {
           printf("\n\n\tCongratulations. You won the Jackpot!\n\n");
           printf("\n\tYou got %d ball(s).", win);
       }//end jackpot
        if(win == 5 && winBonus == 1)
       {
           printf("\n\n\tCongratulations. You won a New Car!\n\n!");
           printf("\n\tYou got %d ball(s) and Bonus number.", win);
       }//end new car
        if(win == 5 && winBonus == 0)
       {
           printf("\n\n\tCongratulations. You won a Holiday!\n\n");
           printf("\n\tYou got %d ball(s).", win);
       }//end holiday
        if(win == 4 && winBonus == 1)
       {
           printf("\n\n\tCongratulations. You won the Weekend away!\n\n");
           printf("\n\tYou got %d ball(s) and Bonus number.", win);
       }//end weekend away
        if(win == 4 && winBonus == 0)
       {
           printf("\n\n\tCongratulations. You won a Night Out!\n");
           printf("\n\tYou got %d ball(s).", win);
       }//end Nighout
        if(win == 3 && winBonus == 1)
       {
           printf("\n\n\tCongratulations. You won a pair off cinema tickets!\n\n");
           printf("\n\tYou got %d ball(s) and Bonus number.", win);
       }//end cinema tickets
       if(win == 3 && winBonus == 0)
       {
           printf("\n\n\tSorry you didnt win anything\n\n");
           printf("\n\tYou got %d ball(s)\n\n", win);
       }//end cinema tickets
       if(win == 2 && winBonus == 0)
       {
           printf("\n\n\tSorry you didnt win anything\n\n");
           printf("\n\tYou got %d ball(s).", win);
       }//end cinema tickets

        if(win == 2 && winBonus == 1)
       {
           printf("\n\n\tSorry you didnt win anything\n\n");
           printf("\n\tYou got %d ball(s) and Bonus number.", win);
       }//end cinema tickets

       if(win == 1 && winBonus == 0)
       {
           printf("\n\n\tSorry you didnt win anything\n\n");
           printf("\n\tYou got %d ball(s).", win);
       }//end cinema tickets

       if(win == 1 && winBonus == 1)
       {
           printf("\n\n\tSorry you didnt win anything\n\n");
           printf("\n\tYou got %d ball(s) and the Bonus Number.", win );
       }//end cinema tickets

        if(win == 0 && winBonus == 0)
       {
           printf("\n\n\tSorry you didnt win anything\n\n");
           printf("\n\tYou got %d ball(s).", win);
       }//everything if

        if(win == 0 && winBonus == 1)
       {
           printf("\n\n\tSorry you didnt win anything\n\n");
           printf("\n\tYou got %d ball(s).", win + 1);
       }//everything if
    }//end else
}//end option4()
//Initializing Option5()
//Algoritm used to count the amount of numbers
option5(int *userNumbers)
{
    int number=0;                            //this variable is used to store the current value of the array and is used as a positioning in the numCount array
    static int numCount[NUMBERS] = {0};     //initialized to 0 for no random data with 43 + 1 elements
    int i,k,n;
    //Countng the value for users input
    for(n=0,k=1;n<SIZE,k<SIZE + 1;n++,k++)
        {
            if( *(userNumbers + n) > 0 && *(userNumbers + n) < 43)
                {
                    number = *(userNumbers + n);
                    //numCount[number] ++;
                    *(numCount + number) =  *(numCount + number)+ 1;
                }//end if
        }//end for
    //Printing the contents of option5()
    printf("\n");
    for(i=1;i<NUMBERS;i++)
        {
            if(numCount[i] > 0)
            {
            printf("\tNumber %d of the array has %d\n",i,*(numCount + i));
            }
            *(userNumbers + i) = 0;
        }//end for
}//end option5()
//initializing option6()
option6(int exitGame)
{
    char exit;
    printf("\n\tAre you sure you want to exit the game? [Y/N]\n");
    scanf("%1s",&exit);
    if(exit == 'Y' || exit == 'y')
    {
        return(1); // this will return 1 to the game which keeps the loop going
    }//end if
    else
    {
        printf("\n\tRESUMING GAME.....\n");
        return(0);
    }//end else
}//end option6()
//Only for printing purposes
//implementing option7()
option7(int numbers)
{
    int i;
	int r[SIZE] = {0};
	srand(time(NULL));  //use this instruction once
	for(i=0;i<SIZE;i++)
    {
	*(r + i) = rand(1) % 42; //random number form 0 to 10, change the number for generating numbers form 0 to n
	printf("\tNumber %d: %d\n",i + 1,*(r + i));
	numbers = r;
    }//end for
}//end option7()
//implementing def()
def(int num)
{
     printf("\n\tNOT A VALID OPTION. PLEASE TRY AGAIN(1-6 only).\n");
     return(0);
}//end def()
input(int element)
{
    int flag = 0;
    char *element1[2];
    char ch[0];
    while(flag == 0)
    {
    scanf("%s",ch);
    strcpy(element1,ch);
    element = atoi(element1);
    if(element >0 && element < 43)
    {
        printf("......check");
        flag = 1;
        return(element);
    }//end if()
    else
        {
        printf("\tError not in range of 1-42. Try again!\n");
        printf("\tEnter your number:\n");
        }
    }//end while
}//end input()
