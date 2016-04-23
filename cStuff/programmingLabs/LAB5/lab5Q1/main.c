/*Write a program using a while loop to print out the numbers 1 - 10 in descending
order on the same line and each number is separated by a comma (e.g.
1,2,3,4,5,6,7,8,9,10)*/
#include<stdio.h>
main()
{
 int i=10;
 printf("print numbers 1-10 in reverse using a while loop;\n");

 while(i > 0)
 {
     printf("%d ,",i);
     i -- ;

 }//end while

}//end main()
