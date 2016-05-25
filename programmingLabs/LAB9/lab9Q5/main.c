/*Using pointer notation only, write a program that uses 2 floating-point arrays with 3
elements in each. Enter values into the 1st array. Copy the contents of this array into
the 2nd array. Display the contents of both arrays.*/
#include<stdio.h>
#define SIZE 3
main()
{
    float array1[SIZE]={0};
    float array2[SIZE]={0};
    int i;
    int *ptr1,*ptr2;

    //populate the array using pointer notation
    for(i=0;i<SIZE;i++)
    {
        printf("element %d\t",i);
        scanf("%f",&*(array1 + i));

        *(array2 + i) = *(array1 + i);
    }//end for

    //print conents of second array using pointer notation
    for(i=0;i<SIZE;i++)
    {
        printf("The contents of position %d array1 is %.2f\n",i,*(array1 + i));
        printf("The contents of position %d array2 is %.2f\n",i,*(array2 + i));
    }//end for


getch();

}//end main
