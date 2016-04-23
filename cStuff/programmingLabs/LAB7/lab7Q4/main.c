/*from programming book in c, enter 15 numbers. display them on a line of their own, in reverse,*/
#include<stdio.h>
#define SIZE 15
main()
{
    int num[SIZE];
    int i,j;

    printf("Enter %d numbers:\n",SIZE);

    for(i=0,j=1;i<SIZE,j<SIZE+1;i++,j++)
    {
        printf("element %d\n",j);
        scanf("%d", &num[i]);

    }//end for
    printf("Seperate.....\n");
    for(i=0;i<SIZE;i++)
    {
        printf("%d,\n",num[i]);
    }//end for

     printf("Sameline.....\n");
    for(i=0;i<SIZE;i++)
    {
        printf("%d, ",num[i]);
    }//end for
        printf("\nReverse.....\n");
     for(i=SIZE -1;i>-1;i--)
    {
        printf("%d,\n",num[i]);
    }//end for
}//end main()
