/*the following program is for lab1 q2 part c in c programming book*/
#include<stdio.h>
#include<stdlib.h>
main()
{
    char chars[] = {'a',NULL,'b',NULL, 'c',NULL,'d' };
   int i;


   for(i=0;i<7;i++)
   {
       if(*(chars + i) == NULL)
       {
           *(chars + i) = '_';

       }//end for

       for(i=0;i<8;i++)
       {
           printf("the elements of Chars are %d %c\n",i,*(chars + i));
       }



   }//end for

   return(0);


}//end main
