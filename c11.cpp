
//program check student grade

#include <stdio.h>
int main()
{
    int grade ;
    printf("entre your grade  : ");
    scanf("%d",&grade);
      
    
    //if (grade < 0 || grade > 100);
    //printf("invalid grade");
    
    if( grade < 50 && grade>=0)
        printf("F");
    else if(grade >=50 && grade<75)
        printf("C");
    else if(grade >=75 && grade<85)
        printf("B");
    else if(grade >= 85 && grade<=100 )
        printf("A");
    else
    printf("invalid inpute");

  return 0;    
}