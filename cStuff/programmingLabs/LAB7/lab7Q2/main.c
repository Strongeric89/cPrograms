/*Write a program that uses a 3x2 (2-D) array. Your program must do the following:
a) Enter values into the array
b) Display the values in the array
c) Find the smallest & largest value and display these
d) Calculate the average of the values and display this*/
#include<stdio.h>
#define ROW 3
#define COL 2
main()
{
    int array[ROW][COL];
    int i,j;
    int smallest=1;
    int largest=smallest;
    float avg=0;
    int elm = COL * ROW;



    printf("Populate the array:\n");

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&array[i][j]);

            avg = avg + array[i][j];


            //sorting the smallest and largest
            if(array[i][j] < smallest)
            {
                smallest = array[i][j];
            }//end if

            if(array[i][j] > largest)
            {
                largest = array[i][j];
            }//end if


        }//end innter loop
    }//end outter loop


    //display conents of the array
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("element (%d,%d) of array is %d \n",i,j,array[i][j]);


        }//end innter loop
    }//end outter loop

    avg = avg / elm;

 printf(" smallest number %d\n", smallest);
 printf(" largest number %d\n", largest);
 printf(" average number %.1f\n", avg);



}//end mainO()
