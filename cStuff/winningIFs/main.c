/*The comparison part with the winning numbers*/
#include<stdio.h>
#define SIZE 6
main()
{
    int userNumbers1[SIZE]={0};
    int i,k;
    int gameNumbers[SIZE]= {1,3,5,7,9,11};
    int bonusNum = 42;
    int commonNumbers[SIZE]={0};
    int win=0;
    int winBonus=0;

    printf("Ask user to enter numbers:\n");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&*(userNumbers1 + i));

    }//end for

    for(i=0;i<SIZE;i++)
    {
        for(k=0;k<SIZE;k++)
        {
              if(userNumbers1[i] == gameNumbers[k] || userNumbers1[i] == bonusNum )
                {
                    *(commonNumbers + i) = *(userNumbers1 + i);
                }//end if
        }//end inner
    }//end outter

    //counting the balls up

    for(i=0;i<SIZE;i++)
    {
        if(commonNumbers[i] == 42)
        {
            winBonus = 1;
        }//end if
        if(commonNumbers[i] > 0)
        {
        printf("your number in common is %d\n",*(commonNumbers + i));
        win ++;

        }//end if


    }//end for
    printf("you got %d balls.", win);

   if(win == 6 && winBonus ==1)
   {
       printf("Congratulations. You won the Jackpot!\n");
   }//end jackpot

    if(win == 5 && winBonus ==1)
   {
       printf("Congratulations. You won a New Car!\n!");
   }//end new car

    if(win == 5 && winBonus ==0)
   {
       printf("Congratulations. You won a Holiday!\n");
   }//end holiday

    if(win == 4 && winBonus ==1)
   {
       printf("Congratulations. You won the Weekend away!\n");
   }//end weekend away

    if(win == 4 && winBonus ==0)
   {
       printf("Congratulations. You won a Night Out!\n");
   }//end Nighout

    if(win == 3 && winBonus ==0)
   {
       printf("Congratulations. You won a pair off cinema tickets!");
   }//end jackpotb

   if(win < 3 && winBonus == 0)
   {
       printf("Sorry you didnt win anything\n");
   }//everything else


}//end main
