/*the following question is la2 Q3
Write a program that uses a function to find the highest and lowest number of 3
values. These 3 values must be passed as parameters to the function, i.e.
function_name(int, int, int). Your function should find these values and display
messages stating:
The Highest value is x
The Lowest value is y*/
#include<stdio.h>
#define SIZE 3
//declare prototype
int highest(int,int,int);
main()
{

    int num1,num2,num3;

    printf("Enter %d numbers\n",SIZE);
    scanf("\n%d%d%d",&num1,&num2,&num3);

    //call on the function highest()

    highest(num1,num2,num3);

    printf("Main() ended");

}//end main()

//implementing highest()

int highest(int var1,int var2, int var3)
{


   int highest = 0;
    int smallest = 0;
    int middle = 0;

    if(var1 > var2 && var1 > var3)
    {
        highest = var1;
        if(var2 > var3)
        {
            smallest = var3;
        }//end if
        else
            {
            smallest = var2;
            }
    }//end if

    if(var2 > var1 && var2 > var3)
    {
        highest = var2;
        if(var1 > var3)
        {
            smallest = var3;
        }//end if
        else
            {
            smallest = var1;
            }
    }//end if

    if(var3 > var1 && var3 > var2)
    {
        highest = var3;
        if(var1 > var2)
        {
            smallest = var2;
        }//end if
        else
            {
            smallest = var1;
            }
    }//end if



     printf("The highest number is %d\n",highest);
     printf("The smallest number is %d\n",smallest);
}//end highest
