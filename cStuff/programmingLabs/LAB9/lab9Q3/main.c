/*Write a program that uses 2 float variables called input1 and input2. Enter values
for these variables. Using pointers (called ptr1 and ptr2), your program should do
the following:
a) Print the address of input1 and input2 (on separate lines).

b) Print the address of ptr1 and ptr2 (on separate lines) - Remember, even though
these are pointers, they are still variables. Therefore, each will also have their
own address in memory.

c) Make ptr1 and ptr2 point to input1 and input2 respectively. Print the contents of
ptr1 and ptr2. (The output should be the same as the addresses of input1 and
input1 above).

d) Using the indirection operator, print the contents of the address stored in ptr1
and ptr2.*/

#include<stdio.h>
#define SIZE 4;
main()
{
    float input1, input2;
    float *ptr1,*ptr2;

    ptr1 = &input1;
    ptr2 = &input2;

    printf("Enter values to input1 and input2 using pointer\n");
    scanf("%f%f",&*ptr1, &*ptr2);

    printf("address of input1 is %p\n",&input1);
    printf("address of input2 is %p\n",&input2);
    printf("address of ptr1 is %p\n",&ptr1);
    printf("address of ptr2 is %p\n",&ptr2);
     printf("contents of ptr1 is %f\n",*ptr1);
    printf("contents of ptr2 is %f\n",*ptr2);



    printf("outputing input1: %.2f and input2: %.2f",input1,input2);


}//end main
