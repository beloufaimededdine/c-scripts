/*
polynomials 

program that asks the user to enter
a value for x and then displays 
the value of the following polynomial
f(x) = 2x^4 - 6x^3 - 4x + 12

*/

#include <stdio.h>
int main () 

#define f(x) (2*(x*x*x*x))-(6*(x*x*x))-(4*x)+(12)

 {

     float x ;
     printf ("entre x : ");
     scanf ("%f", &x);
     printf( "sum is : %f",f(x));  
  return 0 ;
 }  