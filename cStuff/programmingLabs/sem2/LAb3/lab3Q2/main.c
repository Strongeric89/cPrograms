/*Returning a value from a function. Write a program that uses a function to calculate
the average of 3 numbers. Your main() should ask the user to enter these 3 numbers
and they should be passed to the function as parameters. Your function should
calculate the average and return this value back to the main(). Your main() should
then display this average value.*/
#include<stdio.h>
#define SIZE 3
//prototype for function
float avg1(int,int,int);
main()
{
    int num1,num2,num3;
    float average=0;

    printf("Please enter %d numbers:\n",SIZE);
    scanf("%d%d%d",&num1,&num2,&num3);

    //calling function
    average = avg1(num1,num2,num3);

    printf("The average of the %d numbers is %.2f",SIZE,average);

}//end main()

//implimenting avg function()
float avg1(int val1,int val2,int val3)
{
    float total = 0;
    float average = 0;

    total = val1 + val2 + val3;
    average = total / SIZE;

    printf("in the average function average is %.2f\n",average);
    return(average);

}//end avg()
