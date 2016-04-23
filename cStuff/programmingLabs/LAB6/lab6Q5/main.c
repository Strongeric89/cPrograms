/*Write a program that uses a char array with 5 elements. Enter any 5 characters of your
choice into the array. Output the contents of the array to the screen and display each
character.
Note: What happens if you enter the 'Spacebar' and 'Enter' key as characters using %c
as the delimiter in your scanf() ? Notice anything strange? They are valid characters
after all!!!!*/
#include<stdio.h>
#define SIZE 5
main()
{
    char array[SIZE];
    int i;

    printf("Populate the array!\n");

    for(i=0;i<SIZE;i++)
    {
        printf("Element %d  ",i);
        scanf("%c",&array[i]);
    }//end for

    //output the contents
    for(i=0;i<SIZE;i++)
    {
        printf("Element %d of array is %c\n",i,array[i]);

    }//end for




}//end main

