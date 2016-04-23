/*lab 7 q9 from programming c book, populate the array. if a number is less than 0 display its indices*/
#include<stdio.h>
#define ROW 4
#define COL 5
main()
{
    int array[ROW][COL];
    int i,j;

    printf("Populate the array: \n");

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("(%d,%d)\n",i,j);
            scanf("%d",&array[i][j]);

        }//end inner for
    }//end outter for

    printf("Elements of the array that are less than 0\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            if(array[i][j] < 0)
            {
                printf("(%d,%d) value %d\n",i,j,array[i][j]);
            }//end if
        }//end inner for
    }//end outter for


}//end main()
