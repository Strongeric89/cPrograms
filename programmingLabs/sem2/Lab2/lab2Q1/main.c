/*The Following question if lab 2 Q1
Write a program that uses a function to print 10 stars (*) on a single line. Ensure you
declare your function prototype and include adequate comments.*/
#include<stdio.h>
//prototype
#define SIZE 10
void stars(void);
main()
{

    printf("The following program will print stars within another function.\n Before the Function\n");

    //call the function
    stars();
    printf("\nAfter the function");

}//end main

//call the function stars
stars()
{
    int i;
    for(i=0;i<SIZE;i++)
    {
        printf("* ");
    }//end for


}// end function stars()
