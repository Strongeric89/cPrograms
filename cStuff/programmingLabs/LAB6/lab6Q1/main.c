/*Write a program that uses an array to read in 5 numbers. Copy the contents of this
array into another array (using only a loop remember!!)*/
#include<stdio.h>
#define SIZE 5
main()
{
    int array1[SIZE];
    int array2[SIZE];
    int i;

    printf("Populate the array:\n");

    for(i=0;i<SIZE;i++)
    {
        printf("element %d of array 1\t",i);
        scanf("%d",&array1[i]);

        array2[i]=array1[i];
    }//end for

    //print contents of array2 to ensure the elements were copied
    printf("NOW ARRAY 2\n");
    for(i=0;i<SIZE;i++)
    {

        printf("Element %d of array 2 is %d\n",i,array2[i]);
    }//emd for


}//end main,i
