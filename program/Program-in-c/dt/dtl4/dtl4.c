#include<stdio.h>

int main (void)
{        
       int n, number, lessonsNumber, counter;	
	
       for (counter=1;counter<=5;++counter) {	
          printf("What lessons number do you want?");        
          scanf("%i", &number);	

          lessonsNumber=0;		

          for (n=1;n<=number;++n)	  
             lessonsNumber=6+lessonsNumber;	         

           printf("lessons   number    %i is    %i\n",    number, lessonsNumber);	     
       }              

      
       return 0;
}
