/*the following program is to utilize DMA2 Calloc function--- the same program from DMA1 however with Calloc*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    int num_of_el, i;

    printf("How many elements do you need?");
    scanf("%d",&num_of_el);

    //calculate number of bytes thats required using MALLOC
    /*num_of_bytes = num_of_el * sizeof(int); //this takes the users input, multiplied by the size of what an int is ie.. 4 bytes*/

    //calculate memory using CALLOC NOT MALLOC
    //allocate memory
    ptr=(int*) calloc(num_of_el,sizeof(int)); // This line is the only difference to MALLOC version

    //check if memory is allocated
    if(ptr == NULL)
    {
        printf("ERROR! cannot allocate memory. NULL");
    }//end if
    else
        {
        printf("Enter your %d numbers\n",num_of_el);

        for(i=0;i<num_of_el;i++)
        {
            scanf("%d",&*(ptr + i));
        }//end for1

        printf("\n");

        for(i=0;i<num_of_el;i++)
        {
            printf("%d \n",*(ptr + i));
        }//end for2

        free(ptr); //free's up that memory of the memory starting at the said ptr IMPROTANT TO REMEMB£R!!

        }//end else

        return 0;

}//end main()

