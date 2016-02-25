/*The following Program is for Lab test 3. Programming in C
Author:Eric Strong C15708709
Date: 25/02/2016
Platform: Windows 10, Codeblocks Version 13.12
Version: 1.0
Program Description:
The following program is a currency converter and acts like a menu to ask user to enter 3 different options 1. is to change to euro 2. is
to change to dollars and 3 is to exit. in side of each option is a function that coverts the original value to the appropriate amount and
returns the average of the 3 numbers to the main.

*/
#include<stdio.h>
#define SIZE 3
//Prototype Functions
float change_to_Euro(float []);
float change_to_Dollar(float []);
int exit(int);

main()
{
    int option=0;
    int i,k;
    float amounts[SIZE]={0};
    float average_Euro = 0;
    float average_Dollar = 0;
    int game = 0;
    int gameEXIT;

    while(game == 0)

    {
        printf("\n\nPlease enter your Option\n[1] Euro Conversion\n[2] Dollar Conversion\n[3] Exit\n");
        scanf("%d",&option);

        switch(option)
        {
            case 1:
            {
                printf("You chose Euro, Please Enter your %d amounts\n",SIZE);
                for(i=0,k=1;i<SIZE,k<SIZE + 1;i++,k++)
                {
                    printf("%d.",k);
                    scanf("%f",&amounts[i]);

                }//end for

                //calling the function change_to_Euro()
                average_Euro = change_to_Euro(amounts);

                //displaying the average of the 3 amounts in Euro
                printf("The average of %d amounts in Euro is %.2f\n",SIZE,average_Euro);


            }break;//end case 1

              case 2:
            {
                printf("You chose Dollars, Please Enter your %d amounts\n",SIZE);
                for(i=0,k=1;i<SIZE,k<SIZE + 1;i++,k++)
                {
                    printf("%d.",k);
                    scanf("%f",&amounts[i]);
                    //reseting the amounts

                }//end for

                //calling the function change_to_Dollar()
                average_Dollar = change_to_Dollar(amounts);

                //displaying the average of the 3 amounts in Euro
                printf("The average of %d amounts in Dollar is %.2f\n",SIZE,average_Dollar);


            }break;//end case 2

              case 3:
            {
                system("cls");

                //call option6()
                game = exit(gameEXIT);
            }break; //end CASE 6

              default:
                {
                    printf("You did not enter a valid option, Try again.");
                }break;//end default

        }//end switch
    }//end while
    printf("\nThank you for your input. Goodbye.\n");


}//end main()

//implementing change_to_Euro()
float change_to_Euro(float amounts1[])
{
    int i;
    float euro[SIZE]= {0};
    float euroAvg=0;
    float total=0;

    //convert to Euro
    for(i=0;i<SIZE;i++)
    {
        euro[i] = amounts1[i] *  1.10 ;

        //displaying the amounts side by side
        printf("dollar amount:%.2f\tEuro:%.2f\n",amounts1[i],euro[i]);

        //calculating total
        total = total + euro[i];

    }//end for

    //calculating the average
    euroAvg = total / SIZE;

    //return the average
    return(euroAvg);
}//end change_to_Euro

//implementing change_to_Dollar()
float change_to_Dollar(float amounts1[])
{
    int i;
    float dollar[SIZE]= {0};
    float dollarAvg=0;
    float total=0;

    //convert to Euro
    for(i=0;i<SIZE;i++)
    {

        dollar[i] = amounts1[i] *0.90;

        //displaying the amounts side by side
        printf("euro amount:%.2f\tDollar:%.2f\n",amounts1[i],dollar[i]);

        //calculating total
        total = total + dollar[i];

    }//end for

    //calculating the average
    dollarAvg = total / SIZE;

    //return the average
    return(dollarAvg);
}//end change_to_Dollar

//implementing exit()
exit(int exitGame)
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

}//end exit()

