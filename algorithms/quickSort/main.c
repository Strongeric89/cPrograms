#include<stdio.h>
#include<stdlib.h>
#define SIZE 100


float quicksort(float [],float,float);

main(){
  int i;
  float array[SIZE];

    printf("populating the array with %d elements",SIZE);

      for(i=0;i<SIZE;i++)
    {
        //generates the random numbers of the array between 0 - m
        array[i]= rand() % SIZE + 1;
        printf("element %d of array is %d\n",i, array[i]);
    }//end for

  quicksort(array,0,SIZE-1);

  printf("\nSorted elements: ");
  for(i=0;i<SIZE;i++)
    //printing the array in sorted form
    printf(" %.1f\n",array[i]);

  return 0;
}

float quicksort(float array[SIZE],float first,float last){
    int pivot,j,temp,i;

     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(array[i]<=array[pivot]&&i<last)
                 i++;
             while(array[j]>array[pivot])
                 j--;
             if(i<j){
                 temp=array[i];
                  array[i]=array[j];
                  array[j]=temp;
             }
         }

         temp=array[pivot];
         array[pivot]=array[j];
         array[j]=temp;
         quicksort(array,first,j-1);
         quicksort(array,j+1,last);

    }
}
