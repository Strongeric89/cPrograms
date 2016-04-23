/*Write a program declaring an integer (num1), a character (char1) and 2 pointers (ptr1
that points to an integer and ptr2 that points to a character).
Initialise num1 and char1 to contain an integer and character. Initialise ptr1 to point to
num1 and ptr2 to point to char1. Your program should do the following:

a) Print the contents and address of num1 and char1 (on separate lines).

b) Print the contents of ptr1 and ptr2. (The output should be the same as the addresses
of num1 and char1 above)

c) Using the indirection operator, print the contents of the addresses stored in ptr1
and ptr2.

Do ptr1 and ptr2 have address locations? Check and see, i.e. print the address of ptr1
and ptr2.

Try changing the delimiters (i.e. output type) in your printf statements (i.e. %d, %c,
%p) and see what happens.*/
#include<stdio.h>
#define SIZE 2
main()
{
    int num1 = 2;
    char char1='A';

    int *ptr1= &num1;
    int *ptr2= &char1;

    *ptr1 = 3;
    *ptr2 = 'E';

    printf("num1 address is %p, Its contents is %d\n",&num1,num1);
    printf("char1 address is %p, Its contents is %c\n",&char1,char1);

    printf("Ptr1 address is %p, Its contents is %d\n",&ptr1,*ptr1);
    printf("Ptr2 address is %p, Its contents is %c\n",&ptr2,*ptr2);





}//end main()
