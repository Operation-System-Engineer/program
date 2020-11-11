#include<stdio.h>
int main (void)

{	
     int n,lessonsNumber;				
     printf("Table of lessons Numbers\n\n");	
     printf("n  lessons  from 1 to n\n");	
     printf("-  ---------------------\n");	

     lessonsNumber=0;

     for(n=1;n<=1460;++n) {
     lessonsNumber=6+lessonsNumber;	  
     printf("%i	    %i\n",n,lessonsNumber);	
     }	 


return 0;

}
