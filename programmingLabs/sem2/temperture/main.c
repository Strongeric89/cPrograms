/*the following Question is for lab test 1 semester 2.

Author: Eric Strong C15708709
Platform: Windows 10, Codeblocks Version 13.12

The Following program asks the user to enter 5 tempretures in Celcius. By Modularized programming it implements 2 functions. the first
convert_temp() takes the users 5 tempertures(in an array) and passes by value, these elements. It then converts the numbers to Fahrenheit and
displays celcius and fahrenheit side by side. Also in this function the celcuis average is calculated and returned to be displayed in the main function. The Second function takes the value of
celcius avg and passes by reference. uses the address of this variable in the main() and increments it by 273 inthe kelvin function and returns the value to the main.

*/
#include<stdio.h>
#define SIZE 5
//prototypes
float convert_temp(float []);
kelvin(float*); //no return type
main()
{
    float cel_temp[SIZE];
    float average_Cel = 0;
    float kelvinTemp = 0;
    int i,k;
    printf("Enter your %d tempretures (celcius):\n",SIZE);

    for(i=0,k=1;i<SIZE,k<SIZE + 1;i++,k++)
    {
        printf("%d. ",k);
        scanf("%f",&cel_temp[i]); //reading in the tempretures

    }//end for

    //call the covert_temp()
    average_Cel = convert_temp(cel_temp);

    //displaying the average Celcius
    printf("\nThe average of %d celcius numbers is %.2f\n",SIZE,average_Cel);

    //call the kelvin()
    kelvin(&average_Cel); //using pointer notation to reference the variable's content from the kelvin function

    kelvinTemp = average_Cel; //passing the value for correctness.

    printf("\nThe Kelvin Tempreture is %.2f",kelvinTemp);

}//end main()

//implementing conver_temp()
float convert_temp(float cel_temps[])
{
    int i;
    float total_cel=0;
    float average = 0;
    float fah_temp[SIZE]={0};

    //convert each celcius element to fahrenheit
    for(i=0;i<SIZE;i++)
    {
        fah_temp[i] = ((cel_temps[i] * 9) / 5) + 32;

        //display each element side by side
        printf("\nCelcius:%.2f\tFahrenheit:%.2f\n",cel_temps[i],fah_temp[i]);

        //calculate the average of celcius
        total_cel = total_cel + cel_temps[i];

    }//end for

    //calculating average
    average = total_cel / SIZE;
    return(average); //return the value of average to main()

}//end convert_temp

//implementing the kelvin() function
kelvin(float *celAvg)
{
      *(celAvg) = *(celAvg) + 273; // this function ONLY adds 273 to the value of celAvg. But using a pointer it references it by address.

}//end kelvin()
