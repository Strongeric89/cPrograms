/*perfect input*/
#include<stdio.h>
//prototype
int input(int);
main()
{
    int num = 0;
    printf("Enter your number:\n");

    input(num);
}//end main()

//calling input()
input(int element)
{
    int flag = 0;
    char *element1[2];
    char ch[0];

    while(flag ==0)
    {

    scanf("%s",ch);
    strcpy(element1,ch);
    element = atoi(element1);

    if(element >0 && element < 44)
    {
        printf("The number is fine");
        flag = 1;
        return(element);

    }//end if()
    else
        {
        printf("Error not in range of 1-43. Try again!\n");
        printf("Enter your number:\n");
        }

    }//end while

}//end input()
