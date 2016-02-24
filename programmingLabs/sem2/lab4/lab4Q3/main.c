/*Passing 1-D Array. Write a program that uses a function to calculate the average of 5
numbers in an array. In the main(), you must ask the user to enter 5 numbers and store
these in the array. Pass the array to a function and calculate the average of these 5
numbers. Return the average to your main() and display this*/
#include<stdio.h>
#define SIZE 5

//prototpyes
float avg(int []);
main()
{
    int i;
    int numbers[SIZE];
    printf("enter %d numbers",SIZE);
    for(i=0;i<SIZE;i++)
    {
    scanf("%d", &*(numbers + i));
    }

    float average = (float)avg(numbers);
    printf("\nthe average of %d numbers is %.1f",SIZE,average);
}//end main()

float avg(int numbersCopy[])
{
    int i;
    int total=0;
    float average = 0;
    for(i=0;i<SIZE;i++)
    {
        total = total + *(numbersCopy+i);
    }//end for

    average= (float)total / SIZE;

    //printf("%f",average);
    return(average);

}//end avg()
