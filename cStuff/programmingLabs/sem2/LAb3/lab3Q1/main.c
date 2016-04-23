/*Returning a value from a function. Write a program that uses a function to check if a
number is even or odd. Your main() should allow the user to enter any number and
this should be passed to your function. Your function should check if the number is
even or odd and return a 1 if even or a 0 if odd. Your main() should then indicate the
result*/
#include<stdio.h>
//prototype
int evenOdd(int);
main()
{
    int num1= 3;

    int answer = 3;

    printf("Please enter two numbers to find out if they are even or odd\n");
    scanf("%d",&num1);

    //call the function
    answer = evenOdd(num1);

    if(answer == 1)
    {
        printf("The number you entered is Even\n");
    }//end if
    else if(answer == 0)
    {
          printf("The number you entered is Odd\n");
    }//end else

}//end main()

//implementing evenOdd function
evenOdd(int val1)
{
    if(val1 % 2 == 1)
    {
        printf("The number %d is odd\n",val1);
        printf("Exit the oddEven Function\n");
        return(0);

    }//end if

    else if(val1 % 2 == 0)
    {
        printf("The number %d is Even\n",val1);
        printf("Exit the oddEven Function\n");

        return(1);
    }//end if


}//end evenOdd()

