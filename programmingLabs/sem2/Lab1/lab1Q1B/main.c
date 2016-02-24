/*Write the 2 programs covered in lecture class for both malloc() and calloc().
After you run these programs, change the size of the allocated memory to be smaller
than required (i.e. remove the signof(int) and replace it with a hardcode integer
number, as we discussed in lecture class). Compile and run the changed programs.
What happens?*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 4
main()
{
    int *ptr;
    int elms=0;
    int sizeOfbytes =0;
    int i;

    printf("How many elements do you want?\n");
    scanf("%d",&elms);

    sizeOfbytes = elms * sizeof(SIZE);

    ptr = (int*)calloc(sizeOfbytes,sizeof(SIZE));

    if(ptr == NULL)
    {
        printf("ERROR! cannot allocate memory\n");
    }//end if

    else
    {
         printf("enter your %d elements\n",elms);
        for(i=0;i<elms;i++)
        {
        scanf("%d",&*(ptr + i));
        }//end for

          for(i=0;i<elms;i++)
        {
        printf("\n%d",*(ptr + i));

        }//end for

    }//end else

    free(ptr);

}//end main
