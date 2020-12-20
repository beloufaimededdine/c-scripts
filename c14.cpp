//curenncy converteur 

#include <stdio.h>

#define tltousd tl * 0.13 
#define usdtotl usd * 7.63
#define dzatousd dza * 0.064
#define usdtodza usd * 15.71

int main ()
{
 float  dza , tl , usd ;
 int choise ;
 printf( " ---welcome to currency coverter app---- \n") ;
 while ( choise != 0 ) { 
 printf(  "1- from usd to egp \n 2- from egp to usd \n 3- from usd to tl \n 4- from tl to usd \n 0- exit \n ") ;
 printf("\n entre your choise : ");
 scanf("%d", &choise);

switch ( choise )
{
case 1 :    
     printf(" \n entre usd :"); 
     scanf("%f" , &usd);
     dza = usdtodza ;
     printf(" dza = : %f" , dza) ;  
    break;
case 2 : 
     printf(" \n entre dza :");
     scanf("%f" , &dza);
     usd = dzatousd ;
     printf(" usd = : %f" , usd) ;  

    break;
case 3 : 
     printf(" \n entre usd :");
     scanf("%f" , &usd);
     tl = usdtotl ;
     printf(" tl = : %f" , tl) ; 
    break;


case 4 : 
     printf(" \n entre tl :");
     scanf("%f" , &tl);
     usd = tltousd ;
     printf(" usd = : %f" , usd) ;    
    break;
default:
     printf("invalid value");
    break;
}
}
    return 0 ;
}