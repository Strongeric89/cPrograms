/* insertion sort ascending order */

#include <stdio.h>
#define SIZE 1000

int main()
{
  int  i, j, temp;
  float array[SIZE];

  printf("you have %d elements\n",SIZE);


   for(i=0;i<SIZE;i++)
    {
    //generates the random numbers of the array between 0 - m
    array[i]= rand() % SIZE + 1;
    printf("element %d of array is %f\n",i, array[i]);
    }

  for (i = 1 ; i <= SIZE - 1; i++) {
    j = i;

    while ( j > 0 && array[j] < array[j-1]) {
      temp          = array[j];
      array[j]   = array[j-1];
      array[j-1] = temp;

      j--;
    }
  }

  printf("Sorted list in ascending order:\n");
  printf("Done!:\n");

  for (i = 0; i <= SIZE - 1; i++) {
    printf("%.1f\n", array[i]);
  }

  return 0;
}
