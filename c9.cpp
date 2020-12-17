

//age calculator


#include <stdio.h>
int main () 

 {
     int bd,ay,am,ad,cy,cm,cd,by,bm ; 

     printf("entre your birthday dd/mm/yy : ");
     scanf("%d/%d/%d",&bd, &bm , &by);

     printf("entre your current day dd/mm/yy : ");
     scanf("%d/%d/%d",&cd, &cm , &cy);

    if  (cd < bd) 
    {
        cm -= 1;
        cd += 30;
       
    }
    ad = cd - bd ;
       
    if  (cm < bm)
       
   {
        cy -= 1 ;
        cm += 12 ;
   }
  
    am = cm - bm ;

    ay = cy - by ;
   
   printf(" \n your age is : ");
   printf(" \n year(s) %d \n month(s) %d \n day(s) %d ",ay,am,ad);

   return 0;
 }  