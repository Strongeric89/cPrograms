/*from c programming book q5. chapt 7. input numbers to 2 1d arrays. then output the result of multiply each corresponding element together*/
#include<stdio.h>
#define SIZE 5
main()
{
    int array1[SIZE];
    int array2[SIZE];
    int array3[SIZE];
    int i,j;

    printf("Populate %s\n","array1");

    for(i=0;i<SIZE;i++)
    {
        printf("element %d of array 1  ",i);
        scanf("%d",&array1[i]);
    }//end for

     printf("Populate %s\n","array2");

    for(i=0;i<SIZE;i++)
    {
        printf("element %d of array 2  ",i);
        scanf("%d",&array2[i]);

        array3[i]= array1[i] * array2[i];
    }//end for

     printf("The results of array 3:\n");

    for(i=0;i<SIZE;i++)
    {
        printf("element %d of array 3 is %d\n  ",i,array3[i]);

    }//end for


}//end main()
