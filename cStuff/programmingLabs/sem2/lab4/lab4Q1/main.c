/*Pass by Reference. Write a program that uses 2 functions (1 function to calculate the
area of a Square, another function to calculate the area of a Circle). Declare a variable
in your main for the length of a side of the Square and another variable for the Radius
of the Circle. Ask the user to enter these values. Using Pass by Reference, pass these
as parameters to the separate functions, calculate the areas of the Square and Circle in
their separate function, and display the results in your main(). Remember, you must
use Pass by Reference. Do not forget to declare 2 prototypes for your 2 functions.
You can assume the value of pi = 3.14*/
#include<stdio.h>
//prototype
float circle1(float*);
float square1(float*);

main()
{
    float radius;
    float sqSide;
    printf("enter radius: ");
    scanf("%f",&radius);

    float area = circle1(&radius);
    printf("area of circle is %.2f\n\n",area);

    printf("enter sqSide: ");
    scanf("%f",&sqSide);


    float areasq = square1(&sqSide);
    printf("area of square is %.2f\n\n",areasq);

}//end main

float circle1(float *r)
{
    float pi = 3.14;
    float rSq= (*r)* (*r);
    float area = pi * rSq;

    return(area);
}

float square1(float *side)
{
    float sqArea = (*side) * (*side);
    return(sqArea);

}//end square1
