/*The following program is for LAb1 Q1 semester 2. DMA
Write the 2 programs covered in lecture class for both malloc() and calloc().
After you run these programs, change the size of the allocated memory to be smaller
than required (i.e. remove the sizeof(int) and replace it with a hardcode integer
number, as we disc
*/
#include<stdio.h>
#include<stdlib.h>
#define SIZE 2
main()
{

  int *ptr;
  int elm = 0;
  int numOfbytes= 0;
  int i;



  printf("How many elements do you want?\n");
  scanf("%d",&elm);

  numOfbytes = elm * sizeof(SIZE);

  ptr = (int*)malloc(numOfbytes);

  if(ptr == NULL )
  {
      printf("ERROR! unable to allocate memory!\n");
  }//end if

  else
  {
    printf("Enter your %d numbers \t",elm);

    for(i=0;i<elm;i++)
    {
        scanf("%d",&*(ptr + i));
    }//end for

    //output the contents of the memory allocation
    for(i=0;i<elm;i++)
    {
        printf("%d\n",*(ptr + i));

    }//end for

    free(ptr);
  }//end else
}//end main
