/*The following program is for question 2 part C of programming c book*/
#include<stdio.h>
main()
{
    float litres[] = {11.5,11.21,12.7,12.6,12.4};
    float miles[] = {471.5,358.72,495.3,453.6,421.6};
    float mpl [5];
    int i;


    //calculate and populate the array

    for(i=0;i<5;i++)
    {
        *(mpl + i) = *(miles + i) / *(litres + i);


    }//end for

    for(i=0;i<5;i++)
    {
        printf("the amount of miles per hour is calculate at %.2f for elements %d\n",*(mpl + i),i);
    }//end for

}//end main
