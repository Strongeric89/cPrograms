/*Write a program that uses a 3x2 array. Your program must do the following:
a) Enter in values for each element in the array.
b) Calculate and display the sum of row 0, row 1, and row 2 separately.
c) Calculate and display the sum of column 0 and column 1 separately.
d) Find the highest number in the array and display it*/
#include<stdio.h>
#define ROW 3
#define COL 2

main()
{
    int array[ROW][COL];
    int i,j;
    int highest=0;
    int sumROW[ROW]={0};
    int sumCOL[COL]= {0};


    printf("Populate the array\n");

    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("(%d,%d) ",i,j);
            scanf("%d",&array[i][j]);

        sumROW[i] = sumROW[i] + array[i][j];


            if(array[i][j] > highest)
            {
                highest = array[i][j];
            }//end if
        }//end inner loop
    }//end outter loop



                 sumCOL[0]= array[0][0] + array[1][0] + array[2][0];
                 sumCOL[1]= array[0][1] + array[1][1] + array[2][1];

         for(i=0,j=0;i<ROW,j<COL;i++,j++)
         {
          printf("The Sum of Row %d is %d\n",i,sumROW[i]);
           printf("The Sum of Column %d is %d\n",j,sumCOL[j]);
         }//end for


    printf("The highest number in the array is %d\n",highest);


}//end main
