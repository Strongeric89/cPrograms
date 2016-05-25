#include<stdio.h>
#include<string.h>
#define SIZE 20
main()
{
    char str1[SIZE];
    char str2[SIZE];

    printf("enter your string:\n");
    gets(str1);

    puts(str1);

    //check if it is the same backwards

    int test;

    strcpy(str2,str1);
    strrev(str2);

    test = strcmpi(str1,str2);
    if(test == 0)
    {
        printf("string 1 is the same as string 2 Backwards (palindrome)\n%s , %s",str1,str2);
    }//end if
    else{

        printf("string 1 is NOT the same as string 2 Backwards (palindrome)\n%s , %s",str1,str2);
    }



}//end main
