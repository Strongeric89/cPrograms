/*Bubble Sort algorithm*/
#include<stdio.h>
#define SIZE 6
main()
{
    int i,k;
    int organizer;
    int temp;
    int userNumbers1[SIZE]={0};

    printf("PLease enter your %d numbers\n",SIZE);

    //populating the Array: userNumbers1
    for(i=0,k=1;i<SIZE,k<SIZE + 1;i++,k++)
    {
        printf("%d.  ",k);
        scanf("%d",&*(userNumbers1 + i));
    }//end for

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
    printf("Your Lotto Numbers are: ");
    for(i=0;i<SIZE;i++)
    {
        printf("  %d ,",*(userNumbers1 + i));
    }//end for

}//end main()
