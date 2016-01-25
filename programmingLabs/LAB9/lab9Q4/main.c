/*Write a program that asks the user to enter 2 integer values. Store these in variables
called num1 and num2 respectively.
 Using pointers only, find the sum of these
numbers, store them in a third variable called sum, and display this value stored in
variable sum. (Hint: the indirection operator will be used to perform most of your
task). NB - don't forget that you will need 3 pointer variables*/

#include<stdio.h>
main()
{
    int num1=0;
    int num2=0;
    int sum=0;

    int *ptr1,*ptr2,*ptr3;

    ptr1=&num1;
    ptr2=&num2;
    ptr3=&sum;

    printf("enter numbers\n");
    scanf("%d%d",*&ptr1,*&ptr2);
    printf("Sum =%d\n",sum);

    *ptr3 = *ptr1 + *ptr2;

    printf("the sum of num1 and num2 is %d, Sum is now %d",*ptr3,sum);





}//end main
