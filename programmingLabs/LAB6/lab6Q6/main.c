/*Write a program to read numbers into an array of 3 integers. Your program must sort
the array in ascending order (i.e. the first element is the smallest and each element
after the first is greater than or equal to the element before it).*/
#include<stdio.h>
#define SIZE 3
main()
{
    int num[SIZE];
    int i,j;
    int temp=0;


    printf("this is a bubble sort algorithm\nenter %d numbers to the array\n",SIZE);

    for(i=0;i<SIZE;i++)
    {
        printf("Element %d  ",i);
        scanf("%d",&num[i]);
        //copy first element in to a variable temp
    }//end for

    //this logic sorts the first element wjth the element next to it.
    //if the element is greater than element next to it it will copy the contents
    //to to a temp variable. the next element is moved back then temp is copied to element + 1

    for(j=SIZE;j>=0;j--)
    {
        for(i=0;i<=j;i++)
        {
            if(num[i] > num[i + 1])
            {
                temp = num[i];
                num[i]= num[i + 1];
                num[i+1] = temp;
            }//end if
        }//end inner for
    }//end outter for


    for(i=0;i<SIZE;i++)
    {
        printf("element %d is %d\n",i,num[i]);
    }//end for

}//end main()
