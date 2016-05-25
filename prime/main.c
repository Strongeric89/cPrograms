/*
the following checks numbers between 1-100 and finds all the prime numbers

*/
#include<stdio.h>
#define SIZE 100
main()
{
    printf("PRIME NUMBERS\n-------------------\n");
    int i,j,k;//counters for nested for loops
    k=1;

    //This algorthm requires the loops to start at 2

    for(i=2;i<SIZE;i++)
    {
       for(j=2;j<i;j++)
       {
           if(i%j==0)
           {
               break; // this means its not a prime and can exit from inner loop
           }//end if
       }//end inner for

       if(i==j)
       {
           printf("%d.\t",k);
           printf("%d is a prime\n",i);
           k++;
       }//end if

    }//end for
    getch();

}//end main
