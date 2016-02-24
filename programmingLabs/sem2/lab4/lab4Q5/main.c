/*Write a program that passes an array to a function containing 5 numbers and checks
each number if it is even or odd. Use your function to display each number and
whether it is even or odd. Calculate the total number of even numbers and return this
number to your main() and display it.*/
#include<stdio.h>
#define SIZE 5
//prototype
int numbers(int []);
main()
{
    int i;
    int num[SIZE];
    int evenTotal = 0;
    printf("populate the array:");
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&*(num + i));
    }//end for

    //call function
    evenTotal = numbers(num);
    printf("\nthe total of even numbers is %d",evenTotal);
}//end main()

//implementing numbers()
numbers(int copyNum [])
{
    int i;
    int eventotal = 0;
    int oddtotal = 0;
    printf("Your even and odd numbers are as follows:\n");
    for(i=0;i<SIZE;i++)
    {
        if(*(copyNum + i) % 2 == 0)
        {
            printf("%d is even\n",*(copyNum + i));
            eventotal = eventotal + *(copyNum + i);
        }//end if even
        else
            {
            printf("%d is odd\n",*(copyNum + i));
            oddtotal = oddtotal + *(copyNum + i);
            }//end else
    }//end for

    return(eventotal);

}//end numbers()
