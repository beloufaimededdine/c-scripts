
//curenncy converteur with if

#include <stdio.h>

#define tltousd tl * 0.13 
#define usdtotl usd * 7.63
#define dzatousd dza * 0.064
#define usdtodza usd * 15.71

int main ()
{
 float usd , dza , tl , usd ;
 int choise ;
 printf( " ---welcome to currency coverter app---- \n 1- from usd to dza \n 2- from dza to usd \n 3- from usd to tl \n 4- from tl to usd") ;
 printf("\n entre your choise : ");
 scanf("%d", &choise);

if (choise < 1 && choise > 4)
{
    printf("invalid value");
}
else if ( choise == 1 )
  {
     printf("1- from usd to dza");
     printf(" \n entre usd :");   
     scanf("%f" , &usd);
     dza = usdtodza ;
     printf(" dza = : %f" , dza) ;    
  }
else if ( choise == 2 )
  {
     printf("2- from dza to usd");
     printf(" \n entre dza :");
     scanf("%f" , &dza);
     usd = dzatousd ;
     printf(" usd = : %f" , usd) ;    

  }
else if ( choise == 3 )
  {
     printf("3- from usd to tl");
     printf(" \n entre usd :");
     scanf("%f" , &usd);
     tl = usdtotl ;
     printf(" tl = : %f" , tl) ;    

  }
else if ( choise == 4 )
  {
     printf("4- from tl to usd");
     printf(" \n entre tl :");
     scanf("%f" , &tl);
     usd = tltousd ;
     printf(" usd = : %f" , usd) ;    

  }
else
{
    printf("invalid value");
}  
   return 0 ;
}