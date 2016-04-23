/*the counter part*/
#define NUMBERS 44
#define SIZE 6
#include<stdio.h>
main()
{
    int i,k;        //indexes for loops
    int number=0;   //this variable is used to store the current value of the array and is used as a positioning in the numCount array
    int numCount[NUMBERS] = {0};    //initialized to 0 for no random data with 43 + 1 elements
    int array[SIZE]= {0};
    int game = 0;            //array for scanning in 6 numbers

    while(game == 0)
    {



        printf("\nEnter %d numbers\n",SIZE);
        for(i=0,k=1;i<SIZE,k<SIZE + 1;i++,k++)
        {
            printf("%d. ",k);
            scanf("%d",&*(array + i));

            if( array[i] > 0 && array[i] < 44)      //
            {
                number = array[i];
                numCount[number] ++;

            }//end if

            //error checking
            else
                {
                    printf("\nNOT A VALUE BETWEEN 1-43.TRY AGAIN!!\n");
                    i --;
                    k--;
                }//end else
        }//end for


        for(i=1;i<NUMBERS;i++)
        {
            printf("number %d of the array has %d\n",i,*(numCount + i));
        }//end for
    }//end while

}//end main()



