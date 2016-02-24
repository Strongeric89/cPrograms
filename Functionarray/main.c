/*populate an array and return all elements*/
#include<stdio.h>
#define SIZE 5
//prototype
int array(int *);
main()
{
    int i;
    int largest = 0;
    int array1[SIZE]={0};
    printf("enter %d numbers to the array\n",SIZE);

    //call function
    largest = array(&array1);

    for(i=0;i<SIZE;i++)
    {
        printf("in main....element %d of array is %d\n",i,*(array1 + i));
    }//end for

    printf("the largest number in the array is %d",largest);

}//end main()

//array()
array(int * array)
{
    int i;
    int largest=0;
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&*(array + i));
        if(*(array + i) > largest)
        {
            largest = *(array + i);
        }//end if
    }//end for
    return(largest);


}//end array
