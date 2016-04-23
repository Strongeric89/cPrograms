/*Fibonaci sequence question*/
#include<stdio.h>
main()
{
    int num1=0;
    int num2=1;
    int num3;

    int seq=0;
    int i=0;

    num3 = num1 + num2;


    printf("please enter the number of terms for the sequence...\n");
    scanf("%d",&seq);

    printf("%d,%d,",num1,num2);

    for(i=0;i<seq;i++)
    {



    printf("%d,",num3);

    num1 = num2;
       num2 = num3;
       num3 = num1 + num2;



    }




}//end main()
