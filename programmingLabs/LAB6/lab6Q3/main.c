/*Define an integer array with 4 elements. Write a program that will allow the user to
enter 4 numbers into this array and then display these on the screen in the same order
they were entered. Your program must then swap the 1st and 2nd numbers in the array
and swap the 3rd and 4th numbers in the array. Now your program must display the
numbers on the screen using this new order*/
#include<stdio.h>
#define SIZE 4
main()
{
    int array1[SIZE];
    int temp=0;
    int i;

    printf("Enter %d numbers :\n",SIZE);

    for(i=0;i<SIZE;i++)
    {
        printf("element %d.  ",i);
        scanf("%d",&array1[i]);
    }//end for

    //display the array

    for(i=0;i<SIZE;i++)
    {
        printf("element %d is %d\n",i,array1[i]);
    }
    //swap the 1st and 2nd numbers in the array and swap the 3rd and 4th numbers in the array
    temp=array1[0];
    array1[0]=array1[1];
    array1[1]=temp;

    temp=array1[2];
    array1[2]=array1[3];
    array1[3]=temp;

     //display the array new arrangement
      printf("swap the 1st and 2nd numbers in the array and swap the 3rd and 4th numbers in the array\n");
    for(i=0;i<SIZE;i++)
    {
        printf("element %d is %d\n",i,array1[i]);
    }





}//end main
