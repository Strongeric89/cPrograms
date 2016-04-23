/*Returning a value from a function. Write a program that uses a function to calculate
the most commonly used character from a number of 3 characters entered by a user.
Your main() should read the 3 characters and these should be passed to your function.
Your function should calculate the most common character of the 3 (assume the user
enters more than one occurrence of any character). This character should then be
returned to the main(). Your main() should then display this character with an
appropriate message*/
#include<stdio.h>
#define SIZE 3
letter(char[]);
main()
{
    char letters[SIZE];

    int i =0;

    char commonLet;

    printf("Please enter %d letters:\n",SIZE);
    for(i=0;i<SIZE;i++)
    {

    //printf("Letter %d is : ",i);
    scanf("%s",&letters[i]);
    }//end for

    //calling function
    commonLet = letter(letters);

    printf("\n(back in the main) the most common letter is %c",commonLet);


}//end main()

//implementing letter()
letter(char array[])
{
    int i =0;
    int j = SIZE-1;
    char ch;
    char letter[SIZE];


    //this loop checks the contents of array[i] against the letters array but starting for elements 0 ==2, 1==1, 2== 0, the check crossovers putting the result into a variable ch

    for(i=0;i<SIZE;i++)
    {
        letter[i] = array[i];// copy elements

        if(array[i] == letter[j]) // j runs backwards
        {
        ch  = array[i];
        }//end if
        j --;
    }//end for

    return(ch);

}//end letter()


