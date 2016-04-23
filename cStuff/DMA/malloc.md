/*malloc example, is only a beginner to DMA, this program, not finished. will allocate 40 bytes to a location. the pointer will point to this. however if the 40 byttes cannot be allocated then
the o/s returns NULL, cannot be allocated due to no space. note: new items, stdlib, function malloc(), NULL*/

#include<stdio.h>
#include<stdlib.h> // use this header file for the malloc function
main()
{
    int *ptr;
    ptr = malloc(40); //the ptr variable is pointing to the memory allocation of 40 bytes (40 X 4 bytes(1 int = 4 bytes))

    if(ptr == NULL)
        {
        printf("Unable to allocate memory");
        }

    else
        {
            //enter a condition in here to do whatever else
        }


}//end mainO()
