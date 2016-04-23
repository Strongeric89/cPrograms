/*Modify your program (Q1) above to do the following:
a) Declare a third pointer ptr3 that points to an integer. Initialise this to point to
char1. Does this compile? If not, why?
b) Using the indirection operator, print the contents of the address stored in ptr3
with %d and %c. Is there a difference? If yes, explain what this difference is
(include as a comment in your code).*/
#include<stdio.h>
#define SIZE 2
main()
{
    int num1 = 2;
    int num2 = 10;
    char char1='A';

    int *ptr1= &num1;
    int *ptr2= &char1;
    int *ptr3= &num2;

    *ptr1 = 3;
    *ptr2 = 'E';
    *ptr3 = 22;

    printf("num1 address is %p, Its contents is %d\n",&num1,num1);
    printf("char1 address is %p, Its contents is %c\n",&char1,char1);

    printf("Ptr1 address is %p, Its contents is %d\n",&ptr1,*ptr1);
    printf("Ptr2 address is %p, Its contents is %c\n",&ptr2,*ptr2);

    printf("ptr3 address is %p, Its contents is %d\n",&ptr3,*ptr3);
     printf("ptr3 address is %p, Its contents is %c\n",&ptr3,*ptr3);//using delimeter of %c, this prints a blank box. this happens because the
     //pointer is pointing to the contents of an integar as initialized, but the format specifier is a char. this now prints the contents of





}//end main()
