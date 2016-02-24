/*Passing 1-D A%drray. Write a program that uses a function to find the highest number in
an array containing 5 numbers. In the main(), you must ask the user to enter 5
numbers and store these in the array. Pass the array to a function and your function
must find the highest number. Return this number to your main() and display it.

Passing 1-D Array. Make a copy of Q2 above but this time, use your function to
change the contents of the array, i.e. multiply each number in the array by 2. When
your function has finished and your program continues in your main(), print the
contents of your array in your main() and see if the changes made to the contents of
the array in your function can be seen. If not, why?
*/
#include<stdio.h>
#define SIZE 5
//prototype
int highest(int []);
main()
{
    int i;
    int numbers[SIZE];
    int highestnum;

    printf("enter numbers to the array:\n");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d", &*(numbers + i));
    }//end for

    highestnum = highest(numbers);
    printf("The highest number in the array is %d",highestnum);

}//end main

highest(int copyNumbers [])
{
    int i;
    int high =0;
    for(i=0;i<SIZE;i++)
    {
        *(copyNumbers + i)= *(copyNumbers + i) * 2;
        if(*(copyNumbers + i) > high)
        {
            high = *(copyNumbers + i);
        }

    }//end for

    //print contents to ensure they were multiplied by 2
    printf("Printing contents of array inside function, but all elements multiplied by 2\n");
    for(i=0;i<SIZE;i++)
    {
        printf("%d\n",*(copyNumbers + i));
    }//end for

    //return(high);

}//end highest()
