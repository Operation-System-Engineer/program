#include<stdio.h>

int main (void)
{	

      int n,triangularNumber;				
      printf("Table of Triangular Numbers\n\n");	
      printf("n     sum  from 1 to n\n");	
      printf("---   --------------\n");	

      triangularNumber = 0;		

      for( n = 1;n <= 10; ++n )  {
        triangularNumber += n;	  
        printf("%-2i	    %i\n",n,triangularNumber);	
      }	 

   return 0;

}
