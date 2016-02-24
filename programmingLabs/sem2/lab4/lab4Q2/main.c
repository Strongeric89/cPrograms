/*Passing 1-D A%drray. Write a program that uses a function to find the highest number in
an array containing 5 numbers. In the main(), you must ask the user to enter 5
numbers and store these in the array. Pass the array to a function and your function
must find the highest number. Return this number to your main() and display it.*/
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
        if(*(copyNumbers + i) > high)
        {
            high = *(copyNumbers + i);
        }

    }//end for

    return(high);

}//end highest()
