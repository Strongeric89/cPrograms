/*From the programming book in C, find the sum of all the odd integers in range 1-99*/
#include<stdio.h>
main()
{
    int i=0;
    int sum=0;
    int num=0;

    for(i=1;i<100;i++)
    {
        if(i % 2 ==1)
        {
            printf("%d is odd\n",i);
           sum = sum + i;
           num ++;
        }//end if
    }//end for
    printf("The sum of %d odd numbers is %d",num,sum);

}//end main()
