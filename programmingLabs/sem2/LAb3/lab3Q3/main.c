/*Returning a value from a function. Write a program that uses a function to check for
the highest value of 3 numbers. You should enter the 3 numbers using main() and
these should be passed to your function. Your function should find the highest of
these numbers and return it back to main(). Your main() should then display this
highest number*/
#include<stdio.h>
#define SIZE 3
//prototype
int highest(int,int,int);
main()
{
    int num1,num2,num3;
    int highestNum = 0;

    printf("Please enter %d numbers:\n",SIZE);
    scanf("%d%d%d",&num1,&num2,&num3);

    //calling function highest

    highestNum = highest(num1,num2,num3);
    printf("\n(main)The highest number returned from the function is %d\n",highestNum);

}//end main()

//implementing the highest function
highest(int val1,int val2,int val3)
{
  int highestNum = 0;
  int temp=0;

  if(val1> val2 && val1 > val3)
  {
      printf("(highest function) %d is the highest",val1);
      return(val1);
  }//end if

  else if(val2> val1 && val2 > val3)
  {
      printf("(highest function) %d is the highest",val2);
      return(val2);
  }//end if

  else if(val3> val2 && val3 > val1)
  {
      printf("(highest function) %d is the highest",val3);
      return(val3);
  }//end if

  printf("\nEnd of highest function\n");


}//end highest()
