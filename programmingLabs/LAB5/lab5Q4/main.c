/*Write a program that counts from one to ten, prints the values on a separate line for
each, and prints a message stating "This number is three" and "This number is seven"
when the count is 3 and when the count is 7 respectively.*/
#include<stdio.h>
main()
{
    int i=0;

    for(i=1;i<11;i++)
    {
        printf("%d,\n",i);
        if(i==3)
        {
         printf("%d, This number is Three\n",i);
        }//end if

        else if(i == 7)
        {
        printf("%d, This number is Seven\n",i);
        }//end if
    }//end for


}//end main())
