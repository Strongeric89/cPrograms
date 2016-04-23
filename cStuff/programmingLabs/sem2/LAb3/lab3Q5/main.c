/*Pass by Value. Write a program to demonstrate the use of Pass by Value with a
function. Begin by creating an integer variable in your main() and initialise it to 1.
Print this value here. Next, call your function and pass this variable as a parameter to
the function. Increment the parameter in your function by 2 and print this value. Your
function should end here and control passed back to your main(). Print the value of
the variable in your main() again and see if it has changed value. Did the function
increment the variable in your main()?*/
#include<stdio.h>
//prototype
int numF(int);
main()
{
    int num = 1;


    printf("The value of num is %d\n",num);

    //call the function numF
    num = numF(num);

    printf("\nThe value num after the function call is now %d",num);



}//end main()

//impletment the function
numF(int val1)
{
    val1 = val1 + 2;
     printf("The value of Val1 is %d\n",val1);

    return(val1);

}//end numF()
