#include<stdio.h>
#define ROW 2
#define COL 2

//prototypes
float avg(float [][2],int);
void test(int,int,int,int,int,int,int,int,int,int);

main()
{
    float matrix[ROW][COL];
    int i,j; //indexes for loops
    float sum=0;
    float average=0;
    int nums=0;

    printf("Part2, Populate the array\n");
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d,%d\t",i,j);
            scanf("%f",&matrix[i][j]);
            nums ++;
            //part 4
            average=avg(matrix,ROW);
        }//end inner
    }//end outter

    //display the average
    printf("The average number is %f",average / nums);

}//end main]
//implementing the average funciton
float avg(float mat[][2],int numRow)
{
    float sum=0;
    float average=0;
    int i,j;
    for(i=0;i<numRow;i++)
    {
        for(j=0;j<2;j++)
        {

        sum = sum + mat[i][j];
        }
    }
    test(1,2,3,4,5,6,7,8,9,10);

    return(sum);


}//end avg

void test(int n1, int n2, int n3, int n4, int n5,int n6, int n7, int n8, int n9, int n10)
{
    printf("%d %d %d %d %d %d %d %d %d %d",n1,n2,n3,n4,n5, n6,n7,n8,n9,n10);

}
