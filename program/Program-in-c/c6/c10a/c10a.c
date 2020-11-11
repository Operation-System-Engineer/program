#include<stdio.h>
#include<stdbool.h>

int main(void)
{
    int p, d;
   _Bool  isPrime;

   for ( p = 2;p <= 50 ; ++p ) {
      isPrime = 1;

      for ( d = 2; d < p; ++d)
         if ( p % d == false)
         isPrime = 0;
 
      if ( isPrime != false )
         printf ("%i  ", p);
  }

     printf("\n");
     return 0;
}

