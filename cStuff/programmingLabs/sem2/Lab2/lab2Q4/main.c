/*the following question is Lab2 Q4
Write a program that uses 2 functions called sum() and average(). Your program must
ask the user to enter 3 numbers inside the main(). Your main() should then pass these
3 values as parameters to the function sum(). This function should calculate the sum
of the 3 numbers. Your function sum() should then pass the sum of the 3 numbers as a
parameter to the function average(). The function average() should then calculate the
average of the 3 numbers and display this on the screen*/

#include<stdio.h>
#define SIZE 3
//prototype
int sum(int,int,int);
int avg(int);
main()
{
    int num1,num2,num3;
    int total=0;


    printf("Please enter %d numbers\n",SIZE);

    scanf("\n%d%d%d",&num1,&num2,&num3);

    //call the function SUM
   total= sum(num1,num2,num3);

   printf("the average is %d",total);

}//end main()


//call the funciton sum
int sum(int val1,int val2, int val3)
{
    int sumF = 0;
    int average = 0;
    sumF = val1 + val2 + val3;


     average = avg(sumF);
    return(average);

    //call average function


}//end sum function()
//call avg function
int avg(int num)
{
    int total = 0;

    total = num / 3;

    num = total;
    return(num);

}//end avg()
