#include<stdio.h>

int main (void)

{
     int n, triangulularNumber;

     triangulularNumber = 0;

     for ( n=1; n<=200; n=n+1 )
        triangulularNumber = triangulularNumber + n;


     printf("The 200th triangulular Number is %i\n", triangulularNumber);
     
     
     return 0;


}
