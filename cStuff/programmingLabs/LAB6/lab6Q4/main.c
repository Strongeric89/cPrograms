/*a) read in 5 values into the array
b) define another integer array with 5 elements and copy the values from the 1st
array into the second array in reverse order (e.g. the number in the first
element of the 1st array will be in the last element in the 2nd array, etc..).*/
#include<stdio.h>
#define SIZE 5
main()
{
    int array[SIZE];
    int array2[SIZE];
    int i,j;

    printf("Enter %d elements to the array\n",SIZE);

    for(i=0,j=SIZE-1;i<SIZE;j>-1,i++,j--)
    {
        printf("Element %d  ",i);
        scanf("%d",&array[i]);

        //copy contents from array 1 to array2 in reverse order
        array2[j]=array[i];
    }//end for
    printf("In reverse Order!...............\n");
    for(i=0;i<SIZE;i++)
    {
        printf("element %d of array 2(reverse is) %d\n",i,array2[i]);
    }//end for





}//end main()
