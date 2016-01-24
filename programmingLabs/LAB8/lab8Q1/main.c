/*Show how to initialise two 3x4 arrays (2-Dimensional arrays with 3 rows and 4
columns in each) when they are declared. In your program, declare a 3rd 3x4 array.
Multiply each corresponding element in the 1st and 2nd array and store this product in
the corresponding element of the 3rd array.  For example, array3[0][0] = array1[0][0] x
array2[0][0], array3[0][1] = array1[0][1] x array2[0][1], etc*/
#include<stdio.h>
#define ROW 3
#define COL 4
main()
{
    int array1[ROW][COL];
    int array2[ROW][COL];
    int array3[ROW][COL];
    int i,j;

    printf("Populate the array 1\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("element (%d,%d) of array 1\n",i,j);
            scanf("%d",&array1[i][j]);
        }//end inner for
    }//end outter for

      printf("Populate the array 2\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("element (%d,%d) of array 2\n",i,j);
            scanf("%d",&array2[i][j]);
            //calculate array 3 elements
            array3[i][j] = array1[i][j] * array2[i][j];
        }//end inner for
    }//end outter for

    //contents of array 3
    printf("array 3......\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("element (%d,%d) of array 3 is %d\n",i,j,array3[i][j]);

        }//end inner for
    }//end outter for


}//end main
