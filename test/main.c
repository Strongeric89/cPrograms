#include<stdio.h>
#include<string.h>
#define SIZE 100
main()
{
    //part a
    char sentence[SIZE];
    printf("enter your sentence\n");
    gets(sentence);

    //part b
    char *p=sentence;
    int test=0;
    while ( (p=strstr(p,"and")) != NULL )
    {
        test ++;
        p++;
    }
    printf("\nThe occurances of the word \"and\" in the sentences is %d",test);

}//end main
