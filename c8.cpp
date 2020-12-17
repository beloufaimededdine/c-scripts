#include <stdio.h>
int main () 

 {
     int bd ; 
     int bm ; 
     int by ; 
     int cd ;
     int cm ;
     int cy ;
     int ad ;
     int am ;
     int ay ;
    
    
     printf("entre your birth day : ");
     scanf("%d",&bd);
     printf( "\n %d",bd);
     
     printf ( " \n entre current day : ");
     scanf("%d",&cd);
     printf( "\n %d",cd);
     
     
     printf(" entre your birth mounth : ");
     scanf("%d",&bm);
     printf( "\n %d",bm);
     
     printf("\n entre current month : ");
     scanf("%d",&cm);
     printf( "\n %d",cm);
     
     printf("entre your birth year : ");
     scanf("%d",&by);
     printf( "\n %d",by);
     
     printf("\n entre current year : ");
     scanf("%d",&cy);
     printf( "\n %d",cy);
     
     
     
     

   if (cd < bd) 
   {
       cm -= 1;
       cd += 30;
       
   }

       
    ad = cd - bd ;
       
    if (cm < bm)
       
   {
       cy -= 1 ;
       cm += 12 ;
   
   }
   
   
    am = cm - bm ;
   
   
 
  
   
   ay = cy - by ;
   printf(" \n year(s) %d",ay);
   printf(" \n month(s) %d",am);
   printf(" \n day(s) %d",ad);
   return 0;
 }  