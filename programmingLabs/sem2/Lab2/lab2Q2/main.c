/*the following quuestion is lab2 q2 Write a program that uses a function with 2 parameters (a character and an integer,
e.g. function_name(char, int). Your function must display the character parameter a
certain number of times on one line where this number is the integer parameter. For
example, if your function is function_name(*,5) it will display
***** */
#include<stdio.h>
//prototype
int fxn1(char,int);
#define SIZE 5
main()
{
    int num = SIZE;
    char letter = 'E';
    printf("call the function\nBefore the function\n");

    //calling the funciton
    fxn1(letter,num);

    printf("\nAfter the Function");
}//end main()
//calling the function fxn1
fxn1(char let,int numF)
{
    int i =1;
    printf("\nwe declared char let as '%c' in the main function\n",let);
    for(numF = 0; numF<SIZE;numF++)
   {


        printf("\t%d.%c",i,let);
        i++;

   }//end while


}//end function fxn1

