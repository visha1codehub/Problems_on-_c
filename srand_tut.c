#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
   int i, n;
   time_t t;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));
   printf("%d\n", rand() % 3+1);
   
   
   return(0);
}