/*Write a program that asks the user to enter a number between 1 - 5. Your program
should display all the numbers between 1 - 20 that are evenly divisible by this
number. You will need to use a loop. (Tricky question - think first and design your
solution. Don't hack code !!).*/
#include<stdio.h>
main()
{
    int num = 0;
    int i=0;

    printf("Enter a number between 1-5:\t");
    scanf("%d",&num);

    if(num < 1 || num > 5 )
    {
        printf("Not between 1-5, try again!: ");
          printf("Enter a number between 1-5:");
    scanf("%d",&num);
    }//end if
    else
    {
        for(i=1;i<21;i++)
        {
          if(i % num == 0)
                printf("%d is evenly divisable by %d,\n",num,i);
        }//emd for



    }//end if


}//end main()
