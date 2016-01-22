/*Write a program using an array that will allow the user to input 3 temperature
readings in Fahrenheit. After all the temperatures have been read from the keyboard,
display each of these temperatures on the screen and its corresponding temperature in
Celsius.
Use the following formula to convert from Fahrenheit to Celsius:
Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0)*/
#include<stdio.h>
#define SIZE 3
main()
{
    float fah[SIZE];
    float cel[SIZE];
    int i,j;

    printf("Enter %d Fahrenheit tempretures to the array:\n",SIZE);

    for(i=0;i<SIZE;i++)
    {

        printf("Temp Fahrenheit ");
        scanf("%f",&fah[i]);

        //use the following formula Celsius = (Fahrenheit - 32.0) * (5.0 / 9.0)
        cel[i]= fah[i] - 32.0 * (5.0 / 9.0);


    }//end for

    printf("Display the Celcius array\n");
    for(i=0;i<SIZE;i++)
    {
        printf("element %d of Celcius is %.2f\n",i,cel[i]);

    }//end for

}//end main
