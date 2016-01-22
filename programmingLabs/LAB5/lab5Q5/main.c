/*Using a loop, print out all the even numbers from 1 - 100, separated by commas
(Hint: use the modulus operator, i.e. % )*/
#include<stdio.h>
main()
{
    int i = 0;
    int num=0;
    int num1=0;

    for(i=1;i<=100;i++)
    {
        if(i% 2 ==0)
        {
            printf("%d is an even number\n",i);
            num ++;

        }//end if

        if(i% 2 ==1)
        {
            printf("%d is an Odd number\t",i);
            num1 ++;

        }//end if
    }//end for
     printf("There are %d even numbers between 1 and %d\n",num,i);
     printf("There are %d odd numbers between 1 and %d",num1,i);




}//end main
