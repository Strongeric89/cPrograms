/*the following program is for lab 1 question 2part A. Q9 chapter 9 in c programming book
using calloc or malloc, input a specific number of integer values into an array and
dislplay the array and sum of ellemets in the array, use pointer notation
*/
#include<stdio.h>
#include<stdlib.h>

main()
{
    int *ptr,*ptrSUM;

    int i = 0;
    int elms=0;
    int sum = 0;

    ptrSUM = &sum;

    printf("How many elements do you want in the array?\n");
    scanf("%d",&elms);

     int array[elms];

    ptr = malloc(elms * sizeof(int));

    if(ptr == NULL)
    {
        printf("Cannot allocate space for the Array");
    }//end if
    else
    {
        printf("lets populate the array\n");
        for(i=0;i<elms;i++)
        {
            printf("element %d -",i);
            scanf("%d",&*(array + i));
            *ptrSUM = *ptrSUM + *(array + i);
        }//end for
        for(i=0;i<elms;i++)
        {
            printf("The element of the array are %d. %d\n",i,*(array + i));
        }
            printf("the sum of the array is %d",*ptrSUM);


    free(ptr);
    }//end else


}//end main()
