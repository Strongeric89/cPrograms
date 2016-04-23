/*Write a C program that will input a positive integer value, and compute the following
sequence:
If the number is even, halve it; if it is odd, multiply by 3 and add 1.
Repeat this process until the value is 1, printing out each value. Finally print out how
many of these operations you performed*/
#include<stdio.h>
main()
{
    int num = 0;
    int steps = 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(num < 1)
    {
        while(num < 1)
        {
            printf("Error! try again!\n");
            printf("Enter a number: ");
            scanf("%d",&num);
        }//end while
    }//end if

        printf("Initial value is %d\n",num);

        while(num !=1)
        {
            if(num % 2 ==0)
            {
                num = num /2;
            }//end if

            else
            {
                num = (num * 3) + 1;
            }//end else
            steps ++;
            printf("Next value is %d\n",num);
        }//end while
        printf("Finally %d, the amount of steps taken were %d",num,steps);

}//end main
