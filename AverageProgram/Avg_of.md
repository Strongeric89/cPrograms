/*The following program calculates the average of 20 numbers*/
#include<stdio.h>
main()
{
    int i=0;
    int num=0;
    int total =0;
    int average = 0;

    printf("Please enter a number:\n");
    for(i=0;i<20;i++)
    {
        printf("%d. ",i);
        scanf("%d",&num);
        total = total + num;

    }//end if
    average = (float)total / i;
    printf("The average of 20 numbers is %d",average);

}//end main
