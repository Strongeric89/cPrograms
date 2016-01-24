/*Write a program that uses a 3x2 array. Your program must do the following:
a) Enter in values for each element in the array.
b) Calculate and display the sum of row 0, row 1, and row 2 separately.
c) Calculate and display the sum of column 0 and column 1 separately.
d) Find the highest number in the array and display it.*/
#include<stdio.h>
#define ROW 3
#define COL 2
main()
{
    int array[ROW][COL];
    int i,j;
    int rowSum[ROW];
    int colSum[COL];
    int highest = 0;

    printf("Populate the array;\n");

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("element (%d,%d) of array ",i,j);
            scanf("%d",&array[i][j]);

            if(array[i][j] > highest)
            {
                highest = array[i][j];
            }//end if

            rowSum[i] = rowSum + array[i][j];
            colSum[j] = colSum + array[0][j];
        }//end inner for
    }//end outter for
    printf("The sum of row %d is %d\n",i,rowSum);
    printf("The sum of col %d is %d\n",j,colSum);
    printf("The Highest number in the array is %d\n",highest);

}//end main
