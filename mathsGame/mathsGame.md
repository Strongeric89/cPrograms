/*
PROGRAM NAME: MATHS QUIZ
PROGRAM DESCRIPTION: The following program is a menu based maths quiz.
option 1: generates the users request for the amount of questions to be generated
option 2: displays the game based on the users amount
option 3: displays the amount of correct and incorrect questions
option 4: prompts user to quit the game.
If the user enters a number outside the range on 1-4 an error will display
if the user enters a letter the program will return an error prompt to the user.
The program will count up the amount of correct and incorrect questions generated by the users request and reset when option 3 is pressed.
AUTHOR: ERIC STRONG C15708709
PLATFORM: WINDOWS 8.1 USING CODEBLOCKS
*/
#include<stdio.h>
#define MATHS 5
main()
{
    char menu;
    int start=0;
    char end;
    int count=0; // this is the count that will determine the amount of questions to be asked
    char answers[MATHS];
    int answers1[MATHS];//copy of the char answers but for display purposes in the game
    int questions[MATHS];
    int correct=0;
    int incorrect=0;
    int i,j,k; // j is the counter description for the maths questions

    while(start==0){ // This program runs while start==0


    //The Menu options
    printf("\n*******************THE MATHS GAME!******************\n");
    printf("\nPick an option:\n1.Enter the amount of Questions for the Quiz\n2.Start Game\n3.Display Results\n4.Quit Game\n\n\tQuestions selected=%d\n",count);

    //Error catching if a user enters a Char or letter Hence using a char variable
    scanf("%s", &menu); // white space error correcting %1s so the enter key is not read in as a special value


    switch(menu){// menu is a char so it can accept both numbers and letters. Anything with the exception of the case(1-4) will be a default

        /*START OF CASE 1--------------------------------------------------------------------*/
        case '1':{
            printf("\tHow many questions do you want to do in the quiz?");
            scanf("%d", &count);// this number will be used to generate the number of questions in the game

                if(count>0 && count<=MATHS)// if the user enters a number between 1 + 5(maths) it will display the amount selected
                    {
                    printf("\tYou have select %d Questions\n",count);
                    system("pause");// will ask the user to enter a key to continue
                    system ( "cls" );
                    //will clear the screen after any key is pressed

                    }//end case 1 if

                else
                    {
                    printf("\n\tINCORRECT AMOUNT OF QUESTIONS FOR OPTION 1. TRY AGAIN!\n\n");
                    system("pause");// will ask the user to enter a key to continue
                    system ( "cls" );//will clear the screen after any key is pressed
                    count=0; // this will keep the count at 0 if any other option is put in
                    }//end case 1 else

                }break;//end case 1

        /*START OF CASE 2--------------------------------------------------------------------*/
        case '2':{

            if(count==0)
                {
                printf("\n\tYou have not selected any question yet!\n");
                system("pause");// will ask the user to enter a key to continue
                system ( "cls" );//will clear the screen after any key is pressed
                }
            else
                {

            if(correct>0 || incorrect>0)
                // this is to stop the user from re entering the game once played and not displaying results
                {
                printf("\n\tYou have played already. Go to option 3 to see results\n\n");
                }// end case 2 if

            else
                {
                printf("\n\tWelcome to the Maths Game so you picked %d questions\n\n", count);
                system("pause");// will ask the user to enter a key to continue
                system ( "cls" );//will clear the screen after any key is pressed

                // array elements for the questions with the answers
                questions[0]='1';
                questions[1]='3';
                questions[2]='5';
                questions[3]='7';
                questions[4]='9';
                j=1;//counter for the question generator and first numeral
                k=0;// counter for second numberal
                for(i=0;i<count;i++)// the count will never be bigger than the amount of questions the user specified
                    {
                        printf("\nQuestion %d. \t%d + %d = ",j,j,k); // j is used as a counter for both question description and question numbers
                        scanf("%1s", &answers[i]);// the answer is stored to the array position of i
                        k++;
                        j++;//questions counter interates on each question

                        answers1[i]=(int)answers[i]; // casting the answer back to an integar to display the integar value

                        printf("\n\tYou entered %c", answers1[i]); // this will cast the answer to an number if the user enters a Letter
                        printf("\n\tThe Correct answer is %c", questions[i]);



                        // if the answers are equal to the answer the user enters correct increments
                        // the users answer is compared to what is already in the question array if its equal then its correct

                            if(answers[i]==questions[i])
                            {
                            printf("\n\tCorrect!\n");
                            correct ++;
                            }// end inner if

                        // if the answers are NOT equal to the answer the user enters incorrect increments

                            else
                            {
                            printf("\n\tWrong!\n");
                            incorrect ++;
                            }// end inner else

                    }// end for loop


            }//end case 2 else

                system("pause");// will ask the user to enter a key to continue
                system ( "cls" );//will clear the screen after any key is pressed
                }//end outter else
        }break;//end case 2

        /*START OF CASE 3--------------------------------------------------------------------*/
        case '3':{

            if(correct==0 && incorrect==0)
                {
                printf("\n\tYou have NOT played yet!\n\n");
                system("pause");// will ask the user to enter a key to continue
                system ( "cls" );//will clear the screen after any key is pressed


                }// end if

            else
                {
                printf("\n\tThe amount you got correct is %d\n\tThe amount you got incorrect is %d\n",correct,incorrect);

                //Reset the values after option 3 is selected
                correct=0;
                incorrect=0;
                count=0;
                j=1;
                system("pause");// will ask the user to enter a key to continue
                system ( "cls" );//will clear the screen after any key is pressed

                }// end case 3 else


                }break;//end case 3

        /*START OF CASE 4--------------------------------------------------------------------*/
        case '4':{
                    printf("\n\tAre you sure you want to exit game?(press y/Y to exit)\n");
                    scanf("%1s", &end);// prompting the user to enter y/Y to exit the game

            // if the user enters either lower y or upper Y then the condition is true. incrementing the start variable to make the while loop false. this will exit the loop and quit the game

                        if(end=='y'|| end=='Y')
                            {

                            printf("\n\tThank you for Playing!\n\n");
                            start ++;
                            }//endif option 4

                            //if user did not enter Y/y then the loop is still true and the game resumes

                        else
                            {
                            printf("\n\tYou did not enter a valid option for option 4. \n\n\t\t\tResuming game\n");
                            system("pause");// will ask the user to enter a key to continue
                            system ( "cls" );

                            }

                }break;//end case



        /*START OF DEFAUL CASE--------------------------------------------------------------------*/
        //the default case will catch everything the user enters with the exception of 1,2,3 + 4 and display not a valid menu option. THis is the error correcting built into the game
        default:{

                printf("\n\tNOT A VALID MENU OPTION!\n");
                system("pause");// will ask the user to enter a key to continue
                system ( "cls" );


                }break;//end default

        }//end switch

    }//end while loop



}//end main()
