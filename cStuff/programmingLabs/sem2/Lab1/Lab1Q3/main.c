/*Write a program that uses dynamic memory allocation to allocate memory for 5
floating-point numbers. You can use either malloc() or calloc().
After memory has been allocated for the 5 float numbers, enter these numbers.

Calculate the average of these numbers and store this average in another allocated
memory block. Display all of the 5 float values on the screen and the average.
(Hint:
you will need to use 2 float pointers, one pointing to the block of memory storing the
5 floating-point numbers, and one pointing to the block of memory storing the
average of the 5 numbers).*/
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

main()
{
    float *ptr, *avgPtr;
    int i;

    float noBytes;
    float avg = 0;


    noBytes = SIZE * sizeof(float);

    ptr = calloc(noBytes,sizeof(float));
    //avgPtr = calloc(noBytes,sizeof(float));
    avgPtr = &avg;

    if(ptr == NULL)
    {
        printf("ERROR CANNOT ALLOCATE NUMBERS!");
    }//end if
    else
    {
        printf("Enter your %d numbers \t",SIZE);

        for(i=0;i<SIZE;i++)
        {
            scanf("%f",&*(ptr + i));

            *avgPtr = *avgPtr + *(ptr + i);
        }//end for
        printf("the %d numbers are:",SIZE);
        for(i=0;i<SIZE;i++)
        {
            printf("\n%.2f",*(ptr + i));

        }//end for

         *avgPtr = *avgPtr / SIZE;
        printf("\naverage of %dnumbers is %.2f\n",SIZE,*avgPtr);
    }//end else




}//end main()
